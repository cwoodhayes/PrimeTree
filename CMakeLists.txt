# need v3.9 for new version of FindDoxygen, in case I want to add that.
cmake_minimum_required(VERSION 3.9) 
project(PrimeTree 
	VERSION 1.0
	LANGUAGES CXX)

add_definitions("-std=c++11")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

# compile the test programs
add_executable(primeTreeTests
	include/PrimeTree.h
	src/primeTreeTests.cpp)

target_include_directories(primeTreeTests PUBLIC
	include)

target_link_libraries(primeTreeTests ${CONAN_LIBS})