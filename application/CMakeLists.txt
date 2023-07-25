cmake_minimum_required(VERSION 3.26.4)
project(Game)

set(FILES
    main.cpp
)

add_executable(Game ${FILES})

target_link_libraries(Game PRIVATE Cogni)
