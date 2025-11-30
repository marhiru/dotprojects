cmake_minimum_required(VERSION 4.10)

set(project_name yoloc)
project(${project_name})

find_package(OpenCV REQUIRED)

target_link_libraries(${project_name}-lib
    PUBLIC ${OpenCV_LIBRARIES}
)

add_executable(${project_name} ./main.cpp)
