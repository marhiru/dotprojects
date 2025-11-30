cmake_minimum_required(VERSION 4.0.0)

project(yoloc)

find_package(OpenCV REQUIRED)
find_package(onnxruntime REQUIRED)

add_executable(${PROJECT_NAME} ./main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${OpenCV_INCLUDE_DIRS}
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    ${OpenCV_LIBRARIES}
    onnxruntime::onnxruntime
)
