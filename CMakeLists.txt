cmake_minimum_required(VERSION 3.28)
project(spacewarrior)

set(CMAKE_CXX_STANDARD 20)

file(COPY assets DESTINATION ${CMAKE_BINARY_DIR})

add_executable(spacewarrior
        main.cpp
        screen.cpp
        screens.cpp
        resources.cpp
        game.cpp
)
target_include_directories(spacewarrior PRIVATE ./include/)
target_link_libraries(spacewarrior PRIVATE libraylib.a)