cmake_minimum_required(VERSION 3.14)
project(RectLibUse)

set(CMAKE_CXX_STANDARD 17)

# loading library directory
add_subdirectory(external/my_rect_lib)

# executable
add_executable(RectLibUse src/main.cpp)

target_link_libraries(RectLibUse PRIVATE MyRectLib)