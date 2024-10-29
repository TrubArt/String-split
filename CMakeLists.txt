cmake_minimum_required(VERSION 3.30)
project(StringSplitProj)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(Myapp)

add_subdirectory(src)

# исходники
set(sources Main.cpp)

# таргеты
target_sources(Myapp PRIVATE ${sources})
target_link_libraries(Myapp PRIVATE SplitStringLib)