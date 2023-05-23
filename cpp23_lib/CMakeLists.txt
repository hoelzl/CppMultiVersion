cmake_minimum_required(VERSION 3.21)
project(cpp23_lib)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS YES CACHE BOOL "Export all symbols")

add_library(cpp23_lib cpp23_lib.cpp cpp23_lib.h)

install(
        TARGETS cpp23_lib
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        RUNTIME DESTINATION bin
        INCLUDES DESTINATION include
)
