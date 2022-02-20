# CMakeList.txt : CMake project for C++ Excercises, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Ex3VirtualAndConst "VirtualAndConst.cpp" "ExampleBase.h" "ExampleBase.cpp" "ExampleDerived.h" "ExampleDerived.cpp")

# TODO: Add tests and install targets if needed.
