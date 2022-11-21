cmake_minimum_required(VERSION 3.16)
project(SurfacePlotter)

set(CMAKE_CXX_STANDARD 14)

find_package(glfw3 3.3 REQUIRED)
add_executable(SurfacePlotter src/main.cpp
                                src/glad.c
                                src/Shader.cpp
                                src/SurfacePlotter.cpp
                                src/GLProgram.cpp
                                src/Camera.cpp)
target_link_libraries(SurfacePlotter -lGL glfw)