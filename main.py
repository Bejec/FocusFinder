
import cv2
print (cv2.__version__)
import threading
import time
import numpy as np

# custom libraries:
font = cv2.FONT_HERSHEY_SIMPLEX
debugShowEyes = 1
debugShowFocus = 1
debugShowForward = 1

fCam = 1
iCam = 2


# Intializations
screen1 = np.zeros((600, 800, 3), np.uint8)
cv2.imshow("screen1",screen1)
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

while(running):
   t0 = time.time()
   key = cv2.waitKey(1)
   # print(key)
   if (key % 256 == 27): #Escape
      print("Closing")
      running = 0
   t1 = time.time()
   total = (t1-t0)
   print(total)
   cv2.putText(screen1, "FPS: "+str(round(1/total)) + "  Seconds: " + str(total), (5, 450), font, 1, (255, 128, 128), 2, cv2.LINE_AA)
   cv2.imshow("screen1",screen1)
   screen1 = np.zeros((600, 800, 3), np.uint8)

cv2.destroyAllWindows()
