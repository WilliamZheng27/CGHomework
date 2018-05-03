cmake_minimum_required(VERSION 3.10)
project(CGHomwork)

set(CMAKE_CXX_STANDARD 11)
add_executable(CGHomwork main.cpp)
target_link_libraries(${PROJECT_NAME} GL GLU glut)