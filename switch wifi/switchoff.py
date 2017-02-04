import RPi.GPIO as GPIO
import time

# BOARD编号方式，基于BCM
GPIO.setmode(GPIO.BCM)

#继电器1 --GPIO1
GPIO.setup(18,GPIO.OUT)

GPIO.output(18,GPIO.LOW)
