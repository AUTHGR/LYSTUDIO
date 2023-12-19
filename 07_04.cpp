#include <opencv2/opencv.hpp>

using namespace cv;

// 全局变量，用于存储图像
Mat image;

// 回调函数，用于处理滑动条数值的变化
void onTrackbarChange(int, void *userdata)
{
    // 获取滑动条的值
    int brightness = getTrackbarPos("Brightness", "Adjust Image");
    int contrast = getTrackbarPos("Contrast", "Adjust Image");

    // 根据滑动条的值调整图像的亮度和对比度
    Mat adjustedImage = image * (contrast / 50.0);
    adjustedImage += Scalar(brightness - 50, brightness - 50, brightness - 50);

    // 显示调整后的图像
    imshow("Adjust Image", adjustedImage);
}

int main()
{
    // 读取图像
    image = imread("test_photo.jpeg");
    if (image.empty())
    {
        printf("Error: Unable to load image.\n");
        return -1;
    }

    // 创建调整图像窗口
    namedWindow("Adjust Image");

    // 创建亮度滑动条
    createTrackbar("Brightness", "Adjust Image", nullptr, 100, onTrackbarChange);

    // 创建对比度滑动条
    createTrackbar("Contrast", "Adjust Image", nullptr, 100, onTrackbarChange);

    // 初始化滑动条位置
    setTrackbarPos("Brightness", "Adjust Image", 50); // 初始亮度为50
    setTrackbarPos("Contrast", "Adjust Image", 50);   // 初始对比度为50

    // 初始时显示一次调整后的图像
    onTrackbarChange(0, nullptr);

    // 等待按键
    waitKey(0);

    return 0;
}
