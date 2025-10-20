cmake_minimum_required(VERSION 3.10)
project(MarvelSuperheroes)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

file(GLOB_RECURSE SOURCES 
    src/*.cpp
    main.cpp
)

add_executable(MarvelHeroes ${SOURCES})
