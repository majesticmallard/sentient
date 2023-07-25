cmake_minimum_required(VERSION 3.26.4)
project(Cogni)

set(FILES
    glad/src/gl.c
    src/Core.cpp
    src/Logger.cpp
)

add_library(Cogni ${FILES})
target_include_directories(Cogni PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/glad/include)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)

target_link_libraries(Cogni PRIVATE GL glfw)
target_compile_options(Cogni PRIVATE -Iglad/include)
