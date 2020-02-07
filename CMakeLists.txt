# need v3.9 for new version of FindDoxygen, in case I want to add that.
cmake_minimum_required(VERSION 3.9) 

project(PrimeTree 
	VERSION 1.0
	LANGUAGES CXX)

# compile the test programs
add_executable(testBasic
	include/PrimeTree.h
	src/testBasic.cpp)

target_include_directories(testBasic PUBLIC
	include)