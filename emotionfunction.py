# have this stuff in main
# import os
import cv2
import numpy as np
from keras.preprocessing import image
import warnings
warnings.filterwarnings("ignore")
from keras.preprocessing.image import load_img, img_to_array 
from keras.models import  load_model
#import matplotlib.pyplot as plt
import numpy as np

# load model
model = load_model("best_model.h5")


face_haar_cascade = cv2.CascadeClassifier(cv2.data.haarcascades + 'haarcascade_frontalface_default.xml')


cap = cv2.VideoCapture(0)

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

        predictions = model.predict(img_pixels)

        # find max indexed array
        max_index = np.argmax(predictions[0])
        emotions = ('angry', 'disgust', 'fear', 'happy', 'neutral', 'sad', 'surprise')
        if emotions[max_index] != happy:
            confidence.append(predictions[0][max_index])
        else:
            confidence.append(-1)
    saddest_person_index = np.argmax(confidence)
    if confidence[saddest_person_index] != 0:
        return faces_detected[saddest_person_index]
    else:
        return (-1,0,0,0)

print(check_faces(cap, face_haar_cascade, model))

cap.release() # need to properly close camera or else program won't run again


