clc
clear

fudgeFactor = 0.8;
Strelnum = 1000;     % 1/# from dim2
Bwnum = 100;         % #strelval


% load img and create variables
img = uint8(imread('image.jpg'));
bwimg = rgb2gray(img);
imgsize = size(img);
strelval = round(imgsize(2)/1000);
bwarea = strelval*100;

% get edges of image
[~, threshold] = edge(bwimg, 'sobel');
Edge = edge(bwimg,'sobel',fudgeFactor * threshold);

% dilate, areaopen, erode
se1 = strel('sphere',strelval);
Mask = imdilate(Edge,se1);
Mask = bwareaopen(Mask,bwarea);

se2 = strel('sphere',strelval*10);
Blob = imdilate(Edge,se2);

imagesc(Blob)