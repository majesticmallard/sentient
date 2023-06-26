cmake_minimum_required(VERSION 3.26.4)
project(CogniEngine)

find_package(OpenGL REQUIRED)
find_package(OpenGL REQUIRED)

set(FILES
    src/Core.cpp
)

add_library(CogniEngine ${FILES})

target_include_directories(CogniEngine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
