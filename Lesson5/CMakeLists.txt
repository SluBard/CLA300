#============================================================================
# Name        : CMakeLists.txt
# Author      : Brian Price
# Version     :
# Description : Lesson 5 build file
#============================================================================
cmake_minimum_required(VERSION 3.11.0)

project(Lesson5
  VERSION 0.1.0.0
  DESCRIPTION "Lesson 5 of Advanced C++ course."
)

set(CMAKE_DEBUG_POSTFIX d)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -pthread")


if(POLICY CMP0074)
  cmake_policy(SET CMP0074 NEW)
endif()

# ------------------------------------------------------------------
# Exercise 1
# ------------------------------------------------------------------
add_executable(Exercise1 Exercise01/Exercise1.cpp)

# ------------------------------------------------------------------
# Exercise 2
# ------------------------------------------------------------------
add_executable(Exercise2 Exercise02/Exercise2.cpp)

# ------------------------------------------------------------------
# Exercise 3
# ------------------------------------------------------------------
add_executable(Exercise3 Exercise03/Exercise3.cpp)

# ------------------------------------------------------------------
# Exercise 4
# ------------------------------------------------------------------
add_executable(Exercise4 Exercise04/Exercise4.cpp)

# ------------------------------------------------------------------
# Exercise 5
# ------------------------------------------------------------------
add_executable(Exercise5 Exercise05/Exercise5.cpp)


add_executable(Activity01 Activity01/Person.cpp Activity01/PersonGenerator.cpp Activity01/Persons.cpp Activity01/Simulator.cpp Activity01/Watchman.cpp )
