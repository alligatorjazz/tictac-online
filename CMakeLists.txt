cmake_minimum_required(VERSION 3.5.0)
project(tictac-online VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(tictac-online main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
