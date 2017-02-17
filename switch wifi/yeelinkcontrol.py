import os
import requests
import json
import time
import commands

apiheaders = {'U-ApiKey':'360fe3514e6a2fabe12cadec611a5ba1'}
water_apiurl = "http://api.yeelink.net/v1.0/device/354383/sensor/400291/datapoints"

water = requests.get( water_apiurl,headers=apiheaders)

xunlei_status = xunlei.json()
temp=0
if xunlei_status['value'] == 1 and temp==0:
    os.system('python3 switchon.py')
    print('on')
    temp=1
elif xunlei_status['value'] == 0 and temp==1:
    os.system('python3 switchoff.py')
    print('off')
    temp=0