import cv2
import numpy as np
import generalMaths as gm
# import PIL as image
# import time
from threading import Thread, Lock
import time
from pyzbar import pyzbar

lock = Lock()


def cameraInit():
    cam = cv2.VideoCapture(0)
    cam.set(3, 2560)
    cam.set(4, 960)
    cam.set(cv2.CAP_PROP_FPS, 60)
    return cam


def undistort(img_path):
    """# https://medium.com/@kennethjiang/calibrate-fisheye-lens-using-opencv-333b05afa0b0"""
    print('undistort start')
    DIM = (1279, 960)
    K = np.array([[844.1510425947935, 0.0, 573.9360766007275], [0.0, 844.8100204534034, 454.02088193514277], [0.0, 0.0, 1.0]])
    D = np.array([[-0.09463632769211108], [0.011047209754970236], [-0.023786075384237437], [-0.032702337390712176]])
    # img = cv2.imread(img_path)
    img = img_path
    h, w = img.shape[:2]
    map1, map2 = cv2.fisheye.initUndistortRectifyMap(K, D, np.eye(3), K, DIM, cv2.CV_16SC2)
    undistorted_img = cv2.remap(img, map1, map2, interpolation=cv2.INTER_LINEAR, borderMode=cv2.BORDER_CONSTANT)
    print('undistort end')
    return undistorted_img


class VideoGet:     # this creates its own thread
    """This class should be used to grab directional data from the eyes"""
    def __init__(self, src=0):
        self.stream = cv2.VideoCapture(src)
        (self.grabbed, self.frame) = self.stream.read()
        self.frameLeft = None
        self.frameRight = None
        self.stopped = False
        self.stream.set(3, 2560)
        self.stream.set(4, 960)
        self.stream.set(cv2.CAP_PROP_FPS, 60)
        self.set_grayscale = True

    def start(self):
        Thread(target=self.get, args=()).start()
        return self

    def get(self):
        while not self.stopped:
            if not self.grabbed:
                self.stop()
            else:
                (self.grabbed, frame) = self.stream.read()
                if self.set_grayscale:
                    frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                self.frameLeft = frame[0:960, 1280:2560]
                self.frameRight = frame[0:960, 0:1280]

    def stop(self):
        self.stopped = True


class SeekerGet:    # this creates it own thread
    """This class should be used to grab seeker data from the world"""
    def __init__(self, src=0):
        self.stream = cv2.VideoCapture(src)
        (self.grabbed, self.frame) = self.stream.read()
        self.frameLeft = None
        self.frameRight = None
        self.frameLeftFocus = None
        self.frameRightFocus = None
        self.stopped = False
        self.stream.set(3, 2560)
        self.stream.set(4, 960)
        self.stream.set(cv2.CAP_PROP_FPS, 60)
        self.set_grayscale = True
        self.fisheye = False    # Undistort Function is too slow to run on every frame
        self.lockedOn = True
        self.QRCode = True
        self.cropY = 300
        self.cropX = 300
        self.y = 480
        self.x = 640
        self.barcodeData = 0
        self.barcodeType = 0
        self.barx = 0
        self.bary = 0
        self.barw = 0
        self.barh = 0
        self.bartext = 0

    def start(self):
        Thread(target=self.get, args=()).start()
        return self

    def get(self):
        while not self.stopped:
            # time.sleep(0.010)
            if not self.grabbed:
                self.stop()
            else:

                (self.grabbed, frame) = self.stream.read()
                if self.set_grayscale:
                    frame = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
                frame = cv2.flip(src=frame, flipCode=-1)
                self.frameLeft = frame[0:960, 1280:2560]
                self.frameRight = frame[0:960, 0:1280]
            if self.fisheye:

                self.frameLeft = undistort(self.frameLeft)
                self.frameRight = undistort(self.frameRight)

            if self.lockedOn:
                # first limit the bounds for the lockedOn Image
                if self.y > (960 - self.cropY):
                    self.y = (960 - self.cropY)
                if self.y < (0 + self.cropY):
                    self.y = (0 + self.cropY)
                if self.x > (1280 - self.cropX):
                    self.x = (1280 - self.cropX)
                if self.x < (0 + self.cropX):
                    self.x = (0 + self.cropX)

                self.frameLeftFocus = self.frameLeft[(self.y - self.cropY):(self.y + self.cropY), (self.x - self.cropX):(self.x + self.cropX)]
                self.frameRightFocus = self.frameRight[(self.y - self.cropY):(self.y + self.cropY), (self.x - self.cropX):(self.x + self.cropX)]

            if self.QRCode:
                print("StartingBarcodes")
                self.barcodes = pyzbar.decode(self.frameLeft)
                for self.barcode in self.barcodes:
                    # extract the bounding box location of the barcode and draw the
                    # bounding box surrounding the barcode on the image
                    (self.barx, self.bary, self.barw, self.barh) = self.barcode.rect
                    cv2.rectangle(self.frameLeft, (self.barx, self.bary), (self.barx + self.barw, self.bary + self.barh), (128, 255, 128), 2)

                    # the barcode data is a bytes object so if we want to draw it on
                    # our output image we need to convert it to a string first
                    self.barcodeData = self.barcode.data.decode("utf-8")
                    self.barcodeType = self.barcode.type

                    # draw the barcode data and barcode type on the image
                    self.bartext = "{} ({})".format(self.barcodeData, self.barcodeType)
                    cv2.putText(self.frameLeft, self.bartext, (self.barx, self.bary - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.5, (128, 255, 128), 2)

                    # print the barcode type and data to the terminal
                    print("[INFO] Found {} barcode: {}".format(self.barcodeType, self.barcodeData))

    def stop(self):
        self.stopped = True


def splitFrame(self):
    # ret, frame = self.read()  # non-multi threading technique
    frameLeft = self[0:960, 1280:2560]
    frameRight = self[0:960, 0:1280]
    return frameLeft, frameRight


def cropImage(image, x1, x2, y1, y2):
    x1 = int(round(x1))
    x2 = int(round(x2))
    y1 = int(round(y1))
    y2 = int(round(y2))
    newImage = image[y1:y2, x1:x2]
    return newImage


def canny(image):
    # frame_Gaus = cv2.GaussianBlur(frame_gray, (5, 5), 0) #this makes it easier to detect a circle
    dp = 1  # 1              # acuumulator resolution: higher makes accumulator smaller
    minDist = 20000        # Min Distance between the centers of the detected circles
    param1 = 100    # 100       # Not sure what exactly this does
    param2 = 40    # 100        # accumulator threshoold for circles, smaller the value more false circles_
    minRadius = 35      # minimum radius in numbers of pixels
    maxRadius = 110    # maximum radius in numbers of pixels
    light_threshold = 150
    dark_threshold = 70
    kernel_size = 3
    # newImage = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    newImage = image
    newImage = cv2.Canny(newImage, dark_threshold, light_threshold, kernel_size)
    circle = cv2.HoughCircles(newImage, cv2.HOUGH_GRADIENT, dp, minDist=minDist, param1=param1, param2=param2, minRadius=minRadius, maxRadius=maxRadius)
    if circle is None:
        return 0, 0, 0
    if circle is not None:
        circle = np.round(circle[0, :]).astype("int")
        print(circle)
        for (x, y, r) in circle:
            x = circle[0, 0]
            y = circle[0, 1]
            r = circle[0, 2]
        return newImage


def grabCircles(image):
    # frame_Gaus = cv2.GaussianBlur(frame_gray, (5, 5), 0) #this makes it easier to detect a circle
    dp = 1  # 1              # acuumulator resolution: higher makes accumulator smaller
    minDist = 20000        # Min Distance between the centers of the detected circles
    param1 = 100    # 100       # Not sure what exactly this does
    param2 = 30    # 100        # accumulator threshoold for circles, smaller the value more false circles_
    minRadius = 35      # minimum radius in numbers of pixels
    maxRadius = 110    # maximum radius in numbers of pixels
    light_threshold = 150
    dark_threshold = 70

    # newImage = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    newImage = image
    newImage = cv2.Canny(newImage, dark_threshold, light_threshold)
    circle = cv2.HoughCircles(newImage, cv2.HOUGH_GRADIENT, dp, minDist=minDist, param1=param1, param2=param2, minRadius=minRadius, maxRadius=maxRadius)
    if circle is None:
        return 0, 0, 0
    if circle is not None:
        circle = np.round(circle[0, :]).astype("int")
        print(circle)
        for (x, y, r) in circle:
            x = circle[0, 0]
            y = circle[0, 1]
            r = circle[0, 2]
        return x, y, r
