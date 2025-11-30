#include <iostream>
#include <opencv4/opencv2/opencv.hpp>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <image_path>\n";
    return -1;
  }

  cv::Mat image = cv::imread(argv[0], cv::IMREAD_COLOR);

  if (image.empty())
    return -1;
  return 0;
}
