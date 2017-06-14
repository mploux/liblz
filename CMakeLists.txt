cmake_minimum_required(VERSION 3.5.1)

project("LAZY")

OPTION(GLEW_PATH "GLEW directory" ../glew)
OPTION(GLFW_PATH "GLFW directory" ../glfw)

SET(CMAKE_CXX_FLAGS "-std=c++0x")

INCLUDE_DIRECTORIES(includes/LZ/ ${GLEW_PATH}/include/ ${GLFW_PATH}/include/)

FILE(
	GLOB_RECURSE
	source_files
	src/*
)

ADD_LIBRARY(
	LAZY
	STATIC
	${source_files}
)
