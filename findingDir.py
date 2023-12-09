# put sound file into microphone file
import RPi.GPIO as GPIO
from pygame import mixer 
import time

###### sound file config
# Starting the mixer 
mixer.init() 
  
# Loading the song 
# mixer.music.load("ngtgyu.ogg") 
  
# Setting the volume 
mixer.music.set_volume(0.7) 
  
# Start playing the song 
# mixer.music.play() 

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
buff_vals = {dp1:0, dp2:0, dp3:0, dp4:0}
running_total = {dp1:0, dp2:0, dp3:0, dp4:0}

SAMPLE_TIME = 1
print("Press 'p' to pause, 'r' to resume") 
print("Press 'e' to exit the program")

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

    print(front, right, back, left)

    ans = value.index(max(front, right, back, left))

    print(ans)

    print("running total:")
    print("A, B, C, D")
    print(running_total)

    return ans



findDir(SAMPLE_TIME, time.time())

# try:
#     while True:
#         millis_current = round(time.time() * 1000)
#         millis_elapsed = millis_current - millis_last
#         for pin in buff_vals:
#             if GPIO.input(pin) == 0:
#                 buff_vals[pin] += 1
#                 running_total[pin] += 1
#         if millis_elapsed > SAMPLE_TIME:
#             print(buff_vals)
#             buff_vals = buff_vals.fromkeys(buff_vals, 0)
#             millis_last = millis_current
        

# except KeyboardInterrupt:
#     # Clean up GPIO on Ctrl+C exit
#     mixer.music.stop()
#     GPIO.cleanup()
#     print("running total:")
#     print("A, B, C, D")
#     print(running_total)
