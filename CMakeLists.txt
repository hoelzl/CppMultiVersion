cmake_minimum_required(VERSION 3.21)
project(MultiVersion)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(cpp98_lib)
add_subdirectory(cpp23_lib)

add_executable(multi_version main.cpp)
target_link_libraries(multi_version cpp98_lib cpp23_lib)
