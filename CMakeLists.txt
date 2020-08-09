cmake_minimum_required(VERSION 3.17)
project(myLessons)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES)

add_executable(myLessons source/main.cpp source/Resume.cpp source/writeInFile.cpp source/Resume.h source/writeInFile.h source/readData.cpp source/readData.h source/findInFile.cpp source/findInFile.h)