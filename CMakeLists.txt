cmake_minimum_required(VERSION 3.26.4)
project(Sentient)

set(ENGINE ${CMAKE_SOURCE_DIR}/engine)
set(SOURCE ${CMAKE_SOURCE_DIR}/application)

add_subdirectory(${ENGINE})
include_directories(${ENGINE}/include)

add_subdirectory(${SOURCE})
