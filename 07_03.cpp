#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
using namespace cv;
using std::string;
int main(int argc, const char *argv[])
{ // 显示源图像
    string path = "test_photo.jpeg";
    Mat image = imread(path);
    namedWindow("origin");
    imshow("origin", image);

    // Canny边缘检测
    Mat edges;
    Canny(image, edges, 50, 150);
    namedWindow("edges");
    imshow("edges", edges);

    // 膨胀操作
    Mat dilated;
    dilate(image, dilated, Mat(), Point(-1, -1), 2);
    namedWindow("dilated");
    imshow("dilated", dilated);

    // 侵蚀操作
    Mat eroded;
    erode(image, eroded, Mat(), Point(-1, -1), 2);
    namedWindow("eroded");
    imshow("eroded", eroded);

    // 缩放为50%
    Mat resized;
    resize(image, resized, Size(), 0.5, 0.5);
    namedWindow("resized");
    imshow("resized", resized);

    waitKey(0);

    return 0;
}