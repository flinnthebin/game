cmake_minimum_required(VERSION 3.22.1)

project(game VERSION 1.0)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(game src/window.cpp)
target_link_libraries(game sfml-graphics sfml-window sfml-system)




