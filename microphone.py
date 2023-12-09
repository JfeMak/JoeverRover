# put sound file into microphone file
import RPi.GPIO as GPIO
import time
import math

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
angles = {dp1:28.3, dp2:331.7, dp3:208.3, dp4:151.7}
running_total = {dp1:0, dp2:0, dp3:0, dp4:0}

SAMPLE_TIME = 100
print("Press 'p' to pause, 'r' to resume") 
print("Press 'e' to exit the program")

def get_angle(use_total=False):
    x_comp = 0
    y_comp = 0
    temp = buff_vals
    if use_total:
        temp = running_total
    for pin in buff_vals:
        x_comp += temp[pin] * math.cos(math.radians(angles[pin]))
        y_comp += temp[pin] * math.sin(math.radians(angles[pin]))
    return math.degrees(math.atan2(y_comp, x_comp))
try:
    while True:
        millis_current = round(time.time() * 1000)
        millis_elapsed = millis_current - millis_last
        for pin in buff_vals:
            if GPIO.input(pin) == 0:
                buff_vals[pin] += 1
                running_total[pin] += 1
        if millis_elapsed > SAMPLE_TIME:
            print(buff_vals)
            print(f'Angle of sound: {round(get_angle(),2)}')
            buff_vals = buff_vals.fromkeys(buff_vals, 0)
            millis_last = millis_current
        

except KeyboardInterrupt:
    # Clean up GPIO on Ctrl+C exit
    GPIO.cleanup()
    print("running total:")
    print("A, B, C, D")
    print(running_total)
    print(f'Angle of sound: {round(get_angle(True),2)}')
