# Gtkmm Sandbox
cmake_minimum_required(VERSION 3.19)
project(gtkmm_sandbox C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)

include (cmake/finddeps.cmake)
include(cmake/sandbox.cmake)