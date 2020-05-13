cmake_minimum_required(VERSION 2.8)
project(newcafe)

include_directories(.)
include(gtest.cmake)

find_package(Threads)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++l -Wall - Wextra -Werror -pthread")

add_executable(elements src/main.cpp src/logic.cpp)

add_executable(elements-tests test/test.cpp)
target_link_libraries(elements-tests ${CMAKE_THREAD_LIBS_INIT} gtest)