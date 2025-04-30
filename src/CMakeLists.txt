cmake_minimum_required(VERSION 3.10)
project(game-engine-project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(SDL3 REQUIRED)

add_executable(${PROJECT_NAME} primatives.cc)

target_link_libraries(${PROJECT_NAME} SDL3::SDL3)
