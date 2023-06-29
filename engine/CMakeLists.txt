cmake_minimum_required(VERSION 3.26.4)
project(CogniEngine)

set(FILES
    glad/src/gl.c
    src/Core.cpp
)

add_library(CogniEngine ${FILES})
target_include_directories(CogniEngine PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/glad/include)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

target_link_libraries(CogniEngine PRIVATE GL glfw)
target_compile_options(CogniEngine PRIVATE -Iglad/include)
