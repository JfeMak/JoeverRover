# instructions
# source ~/.venv/bin/activate

import time
import traceback
import sys, tty, termios, time
from gpiozero import Robot
from pygame import mixer 
import RPi.GPIO as GPIO
import cv2
import board
import busio
import adafruit_vl53l0x
import numpy as np
import math
from keras.preprocessing import image
import warnings
warnings.filterwarnings("ignore")
from keras.preprocessing.image import load_img, img_to_array 
from keras.models import  load_model
#import matplotlib.pyplot as plt
import numpy as np

####### Sound Configs

# Starting the mixer 
mixer.init() 
  
# Loading the song 
# mixer.music.load("ngtgyu.ogg")
mixer.music.load("pokemon.ogg")
  
# Setting the volume 
mixer.music.set_volume(0.7) 
  
# Start playing the song 
mixer.music.play() 

####### Robot Configs
robot = Robot(left=(23, 24), right=(10, 9))
speed = 1.0
ANGULAR_SPEED = 2.5

####### microphone configs
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)

dp1 = 27 #A
dp2 = 22 #B
dp3 = 18 #C
dp4 = 17 #D

GPIO.setup(dp1, GPIO.IN)
GPIO.setup(dp2, GPIO.IN)
GPIO.setup(dp3, GPIO.IN)
GPIO.setup(dp4, GPIO.IN)

millis_last = 0
millis_elapsed = 0
SAMPLE_TIME = 2.0
threshold = 100
def get_angle(running_total):
    x_comp = 0
    y_comp = 0
    temp = running_total
    angles = {dp1:28.3, dp2:331.7, dp3:208.3, dp4:151.7}

    for pin in running_total:
        x_comp += temp[pin] * math.cos(math.radians(angles[pin]))
        y_comp += temp[pin] * math.sin(math.radians(angles[pin]))
    return math.degrees(math.atan2(y_comp, x_comp))
# seconds
def findDir(sample, last_time):
    # setting up variables
    currentTime = time.time()
    changeInTime = currentTime - last_time
    running_total = {dp1:0, dp2:0, dp3:0, dp4:0}

    while changeInTime <= sample:
        currentTime = time.time()
        changeInTime = currentTime - last_time
        for pin in running_total:
            if GPIO.input(pin) == 0:
                running_total[pin] += 1
    
    # returns
    front = running_total[dp1] + running_total[dp2]
    right = running_total[dp2] + running_total[dp3]
    back = running_total[dp3] + running_total[dp4]
    left = running_total[dp1] + running_total[dp4]

    value = [front, right, back, left]

    # print(front, right, back, left)

    ans = value.index(max(front, right, back, left))

    # print(ans)

    print("running total:")
    print("A, B, C, D")
    print(running_total)
    

    if (max(500, value[ans]) == 500):
        return -1
    print(get_angle(running_total))
    return get_angle(running_total)

# implementation
# findDir(SAMPLE_TIME, time.time())

####### Camera initialization
# load model
model = load_model("best_model.h5")
face_haar_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')
cap = cv2.VideoCapture(0)
camera_width = cap.get(3)

def check_faces(camera, face_haar, emotion_model):
    ret, test_img = cap.read()
    if not ret: return (-1, -1, -1, -1)
    gray_img = cv2.cvtColor(test_img, cv2.COLOR_BGR2RGB)
    faces_detected = face_haar_cascade.detectMultiScale(gray_img, 1.32, 5)
    if len(faces_detected) == 0: return (-1, -1, -1, -1)
    confidence = []
    for (x,y,w,h) in faces_detected:
        roi_gray = gray_img[y:y + w, x:x + h]  # cropping region of interest i.e. face area from  image
        roi_gray = cv2.resize(roi_gray, (224, 224))
        img_pixels = image.img_to_array(roi_gray)
        img_pixels = np.expand_dims(img_pixels, axis=0)
        img_pixels /= 255
        cv2.rectangle(test_img,(x,y), (x+w, y+h), (255,0,0),5)
        predictions = model.predict(img_pixels)

        # find max indexed array
        max_index = np.argmax(predictions[0])
        emotions = ('angry', 'disgust', 'fear', 'happy', 'neutral', 'sad', 'surprise')
        if emotions[max_index] != 'happy':
            confidence.append(predictions[0][max_index])
        else:
            confidence.append(-1)
        # cv2.imshow('frame',test_img)
    saddest_person_index = np.argmax(confidence)
    if confidence[saddest_person_index] != 0:
        return faces_detected[saddest_person_index]
    else:
        return (-1,0,0,0)

print(cap.isOpened())

####### Dist Sensor initialization
i2c = busio.I2C(board.SCL, board.SDA)
vl53 = adafruit_vl53l0x.VL53L0X(i2c)

#default threshold of 2000mm (2 meters)
def person_within_distance(threshold=2000):
    cur_dist = vl53.range
    print("Range: {0}mm".format(cur_dist))
    return (cur_dist <= threshold)



def no_person_found(timeout):
    print("trying to find person")
    starting_time = time.time()
    slow_speed = 0.4
    robot.right(slow_speed)
    while check_faces(cap, face_haar_cascade, model)[0] == -1:
        if time.time() - starting_time > timeout:
            return False
    robot.stop()
    return True

# driving function
def align(w_cam):
    center_cam = w_cam/2
    camera_threshold = 100
    no_PF_counter = 0
    slow_speed = 0.5
    timeout = 5 # seconds
    while True:
        results = check_faces(cap, face_haar_cascade, model)
        x_face = results[0]
        w_face = results[2]
        center_face = x_face + w_face/2
        if x_face == -1:
            robot.forward(slow_speed)
            no_PF_counter += 1
            if no_PF_counter > 75:
                no_PF_counter = 0
                found = no_person_found(timeout)
                if not found:
                    mixer.music.load("sad.ogg") #find sound
                    mixer.music.play()
                    align(w_cam)
            else:
                print("No person detected")
                continue
        robot.stop()
        distance =  center_cam - center_face
        print(f"Distance of face from camera: {distance}")
        if math.fabs(distance) < camera_threshold:
            print("Person is aligned with camera")
            if camera_threshold < 40:
                robot.stop()
                return
            else:
                camera_threshold -= 20
        if distance > 0:
            robot.left(0.4)
        elif distance < 0:
            robot.right(0.4)

# turn to the angle given
def turn(angle):
    if angle == 0: return
    print(f'Turning {angle} degrees')
    if angle < 0:
        robot.right(speed)
    elif angle > 0:
        robot.left(speed)
    time.sleep(ANGULAR_SPEED/(360/math.fabs(angle)))
    robot.stop()

#display user controls
print ('W forward')
print ('S Reverse')
print ('A Left')
print ('D Right')
print ('Q Stop')
print("P Play Sound Again")
print("L to listen for sound")
print("T to detect distance")
print("O to run autonomous code")
print ('E Exit Whole Program')

# setting up the user input system
def getch():
    fd = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)
    try:
        tty.setraw(sys.stdin.fileno())
        ch = sys.stdin.read(1)
    finally:
        termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)
    return ch

seen = False
ran = False
# 2.5 seconds per revolutions
# setting up which input controls which direction
 
try:
    while True:
        char = getch()
        if(char == "w"):
            robot.forward(speed)
        if(char == "q"):
            robot.stop()
        if(char == "s"):
            robot.backward(speed)
        if(char == "a"):
            robot.left(speed)
        if(char == "d"):
            robot.right(speed)
        
        # Sound buttons
        if(char == "p"):
            # print("Enter name of sound file")
            # name = input()
            mixer.music.load("pokemon.ogg")
            mixer.music.play()

        # Microphone button (L for listen)
        if(char == "l"):
            angle_test = findDir(SAMPLE_TIME, time.time())
            print(angle_test)
            turn(angle_test)
            mixer.music.load("helloSW.ogg")
            mixer.music.play()
        
        if(char == "t"):
            print(person_within_distance())
            detecting = False
            while detecting == False:
                detecting = person_within_distance(500)
                robot.forward(speed)
                if detecting == True:
                    robot.stop()
                    break
        
        if(char == "u"):
            ran = False
            seen = False

        # autonomous code
        if(char == "o" and ran == False):
            ran = True
            print("Autonomous code running")
            angle = findDir(SAMPLE_TIME, time.time())
            while angle == -1:
                angle = findDir(SAMPLE_TIME, time.time())

                if angle != -1:
                    break

            print(angle)
            #after finding the direction
            
            turn(angle)

            # # while it still dont work keep looking for faces
            # while seen == False:
            #     (x,y,w,h) = check_faces(cap, face_haar_cascade, model)
            #     # print(x,y,w,h)
            #     if x != -1: 
            #         seen = True
            #         break
                
            # # suppose it works
            # # move function
            align(camera_width)

            detecting = False
            while detecting == False:
                detecting = person_within_distance()
                robot.forward(speed)
                if detecting == True:
                    robot.stop()
                    break
            
            # if detecting == True:
            #     robot.stop()
            mixer.music.load("rick.ogg")
            mixer.music.play()
            
            

        # End it all
        if(char == "e"):
            # Stop the mixer 
            robot.stop()
            mixer.music.stop() 
            cap.release()
            # cv2.destroyAllWindows()
            quit()

except Exception as error:
    print(f'An error occurred: {error}')
    print(traceback.format_exc())
    robot.stop()
    mixer.music.stop() 
    cap.release()
    # cv2.destroyAllWindows()
    quit()
 
