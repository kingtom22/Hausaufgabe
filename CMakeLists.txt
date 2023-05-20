cmake_minimum_required(VERSION 3.0.0)
project(Hausaufgabe VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Hausaufgabe main.cpp Pupil.cpp Form.cpp)
add_executable(Tests test.cpp Pupil.cpp Form.cpp)

add_test(NAME Tests COMMAND Tests)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
