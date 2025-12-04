#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/core/mat.hpp>
#include <opencv2/core/types.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/videoio.hpp>
#include <opencv4/opencv2/opencv.hpp>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <image_path>\n";
    return -1;
  }

  cv::VideoCapture cap;

  if (argc > 1) {
    std::string path = argv[1];
    cap.open(path);

    if (cap.isOpened()) {
      cv::Mat image = cv::imread(path, cv::IMREAD_COLOR);

      if (image.empty()) {
        std::cerr << "Error: Could not open file: " << path << "\n";
        return -1;
      }

      cv::Mat edges;
      cv::cvtColor(image, edges, cv::COLOR_BGR2GRAY);
      cv::Canny(edges, edges, 50, 150);

      cv::Mat side_by_side;
      cv::hconcat(image, cv::Mat(image.size(), image.type(), cv::Scalar(0)),
                  side_by_side);
      cv::Mat right;
      cv::hconcat(side_by_side, right, side_by_side);
    }
  }

  return 0;
}
