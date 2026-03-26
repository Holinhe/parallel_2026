cmake_minimum_required(VERSION 3.5)

project(parallel)

option(USE_FLOAT "Build with float array" ON)

if(USE_FLOAT)
    add_definitions(-DUSE_FLOAT)
else()
    add_definitions(-DUSE_DOUBLE)
endif()

add_executable(main main.cpp)