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
    // 将图像转换为灰度图
    Mat gray;
    cvtColor(image, gray, COLOR_RGBA2GRAY);
    namedWindow("gray");
    imshow("gray", gray);
    // 将灰度图像⼆值化
    Mat binary;
    threshold(gray, binary, 128, 255, THRESH_BINARY);
    namedWindow("binary");
    imshow("binary", binary);

    waitKey(0);

    return 0;
}