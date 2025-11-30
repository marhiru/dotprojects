cmake_minimum_required(VERSION 4.0.0)

project(yoloc LANGUAGES CXX)

find_package(OpenCV REQUIRED COMPONENTS core imgproc imgcodecs highgui)
find_package(onnxruntime REQUIRED)

add_executable(${PROJECT_NAME} ./main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE
    opencv_core
        opencv_imgproc
        opencv_imgcodecs
        opencv_highgui
    PRIVATE ${onnxruntime_INCLUDE_DIRS}
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    ${OpenCV_LIBRARIES}
    PRIVATE ${onnxruntime_LIBRARIES}
)
