cmake_minimum_required(VERSION 3.15)
project(HelloWorld)

add_executable(hello Test.cpp)

# 添加头文件搜索路径
target_include_directories(hello PRIVATE lib/json/json/include)