cmake_minimum_required(VERSION 2.8)

project(spruCe)

include_directories(include)

file(GLOB sources src/*.cpp)

add_executable(spruce ${sources})

set_property(TARGET spruce PROPERTY CXX_STANDARD 11)
set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} "-Wall")


