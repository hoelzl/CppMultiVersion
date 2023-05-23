cmake_minimum_required(VERSION 3.21)
project(cpp_98_lib)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS YES CACHE BOOL "Export all symbols")

add_library(cpp98_lib cpp98_lib.cpp cpp98_lib.h)

install(
        TARGETS cpp98_lib
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        RUNTIME DESTINATION bin
        INCLUDES DESTINATION include
)
