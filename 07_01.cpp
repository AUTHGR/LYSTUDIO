#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/opencv.hpp>
using namespace cv;
using std::string;
int main(int argc, const char *argv[])
{

  string path = "test_photo.jpeg";
  Mat image = imread(path);
  namedWindow("origin");
  imshow("origin", image);
  while (waitKey(1) != 27)
  {
  }
  destroyAllWindows;

  VideoCapture capture(0);
  while (1)
  {
    Mat frame;
    capture >> frame;
    imshow("Camera", frame);
    waitKey(30);
    if (waitKey(1) == 27)
    {
      break;
    }
  }

  VideoCapture cap("test_video.mp4");

  // 检查视频是否成功打开
  if (!cap.isOpened())
  {
    std::cerr << "Error opening video file!" << std::endl;
    return -1;
  }

  // 获取视频的帧数和帧的大小
  int frameCount = cap.get(CAP_PROP_FRAME_COUNT);
  Size frameSize(static_cast<int>(cap.get(CAP_PROP_FRAME_WIDTH)), static_cast<int>(cap.get(CAP_PROP_FRAME_HEIGHT)));

  // 创建窗口用于显示视频
  namedWindow("Video Player", WINDOW_NORMAL);
  resizeWindow("Video Player", frameSize.width, frameSize.height);

  // 播放视频
  Mat frame;
  while (true)
  {
    // 读取一帧
    cap >> frame;

    // 检查是否到达视频的末尾
    if (frame.empty())
    {
      std::cout << "End of video" << std::endl;
      break;
    }

    // 显示当前帧
    imshow("Video Player", frame);

    // 等待一小段时间，单位为毫秒（30帧每秒）
    if (waitKey(30) == 27) // 按下ESC键退出循环
    {
      break;
    }
  }

  // 关闭视频文件
  cap.release();

  // 关闭窗口
  destroyAllWindows();

  waitKey(0);

  return 0;
}