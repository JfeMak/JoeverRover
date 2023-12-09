import time
import sys, tty, termios, time
import os
from gpiozero import Robot
robot = Robot(left=(23, 24), right=(10, 9))
speed = 1.0

#display user controls
print ('W forward')
print ('S Reverse')
print ('A Left')
print ('D Right')
print ('Q Stop')
print ('E Exit Programme')

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

# setting up which input controls which direction 
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
    if(char == "e"):
        quit()
