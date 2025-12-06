cmake_minimum_required(VERSION 4.0.0)

project(yoloc LANGUAGES CXX)

find_package(OpenCV REQUIRED COMPONENTS)
find_package(onnxruntime REQUIRED)

add_executable(${PROJECT_NAME} ./main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE
    ${OpenCV_INCLUDE_DIRS}
    PRIVATE ${onnxruntime_INCLUDE_DIRS}
)

target_link_libraries(${PROJECT_NAME} PRIVATE
    ${OpenCV_LIBRARIES}
    PRIVATE ${onnxruntime_LIBRARIES}
)

if(MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /W4 /permissive-)
else()
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
endif()
