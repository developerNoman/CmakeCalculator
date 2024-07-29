cmake_minimum_required(VERSION 3.10)


project(HelloWorldProject)



add_subdirectory(calculator)


add_executable(hello_world main.cpp)


target_link_libraries(hello_world PRIVATE calculator)
