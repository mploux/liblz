cmake_minimum_required(VERSION 3.5.1)

project("LAZY")

OPTION(GLEW_PATH "GLEW directory" ../glew)
OPTION(GLFW_PATH "GLFW directory" ../glfw)

SET(CMAKE_CXX_FLAGS "-std=c++0x")

INCLUDE_DIRECTORIES(includes/LZ/ ${GLEW_PATH}/include/ ${GLFW_PATH}/include/)

ADD_LIBRARY(
	LAZY
	STATIC
	src/graphics/display.cpp
	src/maths/vec3.cpp
	src/maths/mat4.cpp
	src/maths/quat.cpp
	src/graphics/shader.cpp
	src/utils/error.cpp
	src/utils/string_utils.cpp
	src/utils/file_utils.cpp
	src/maths/transform.cpp
	src/graphics/camera.cpp
	src/inputs/input.cpp
	src/utils/timer.cpp
	src/graphics/mesh.cpp
	src/graphics/obj_loader.cpp
	src/utils/resources.cpp
	src/graphics/textures/texture.cpp
	src/graphics/textures/texture_dds.cpp
	src/graphics/textures/texture_bmp.cpp
	src/graphics/cubemap.cpp
	src/graphics/image.cpp
)
