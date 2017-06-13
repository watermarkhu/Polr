import numpy as np
import copy
import matplotlib.pyplot as plt
import cv2

img = cv2.imread("image3.jpg")
(imgh, imgw, imgc) = img.shape

Blursize    = 5
E_min,E_max = 250,350
E_aperature = 3

H_ac_dis    = 5
H_ac_ang    = np.pi/180
H_thres     = 100
H_min_len   = 100
H_max_lgap  = 20

bwimg = gray = cv2.cvtColor(img,cv2.COLOR_BGR2GRAY)
blimg = cv2.GaussianBlur(img,(Blursize,Blursize),0)

# Edge detection in all channels?

edges = cv2.Canny(blimg,E_min,E_max, apertureSize=E_aperature)
#edges = cv2.fastNlMeansDenoising(edges,10,11,7)

l_img = copy.copy(img)
lines = cv2.HoughLinesP(edges,H_ac_dis,H_ac_ang,H_thres,minLineLength=H_min_len,maxLineGap=H_max_lgap)
for line in lines:
    x1,y1,x2,y2 = line[0]
    cv2.line(l_img,(x1,y1),(x2,y2),(0,255,0),2)


plt.subplot(221),plt.imshow(img),plt.title('Original')
plt.xticks([]), plt.yticks([])
plt.subplot(222),plt.imshow(edges),plt.title('Edges')
plt.xticks([]), plt.yticks([])
plt.subplot(223),plt.imshow(l_img),plt.title('Lines')
plt.xticks([]), plt.yticks([])
figManager = plt.get_current_fig_manager()
figManager.window.showMaximized()
plt.show()