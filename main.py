
import cv2
print (cv2.__version__)
import threading
import time
import numpy as np
import generalMath as gm

# custom libraries:
font = cv2.FONT_HERSHEY_SIMPLEX
debugShowEyes = 1
debugShowFocus = 1
debugShowForward = 1

fCam = 1
iCam = 2


# Intializations

# forwardCam = cv2.VideoCapture(0)
# forwardCam.set(3, 2560)
# forwardCam.set(4, 960)
# forwardCam.set(cv2.CAP_PROP_FPS, 60)

#eyeCam = cv2.VideoCapture(0)
#forwardCam.set(3, 2560)
#forwardCam.set(4, 960)
#forwardCam.set(cv2.CAP_PROP_FPS, 60)

# Flags

running = 1

# Main Loop the thread status checker/handler
def foo(x, y):
    return 0 if y == 0 else x / y



t0 = float(gm.truncate(time.clock(), 3))
tprev = 0

tprev1 = 0

period = 0.010
tolerance = period / 10
period1 = 0.100
tolerance1 = period1 / 10


while(running):
   t1 = float(gm.truncate(time.clock(), 2))

   # this is the thread
   if ((t1 > tprev+(period-tolerance)) and (t1 < tprev+(period+tolerance))):
      #print("time " + str(time.clock()))
      tprev = t1
      print(tprev)
      # function100(deltaTime)

   # this is the thread watcher
   if (t1 > tprev + 2*(period-tolerance)):
      print("cycle missed")
      tprev = t1
      

   if ((t1 > tprev1+(period1-tolerance1)) and (t1 < tprev1+(period1+tolerance1))):
      #print("time " + str(time.clock()))
      tprev1 = t1
      print(tprev1)
      print("slower thread")
      # function100(deltaTime)

   # this is the thread watcher
   if (t1 > tprev1 + 2*(period1-tolerance1)):
      print("slow cycle missed")
      tprev1 = t1


   # print(t1)
   # time.sleep(0.01)
   
   
