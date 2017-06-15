cmake_minimum_required(VERSION 3.5.1)

project("LAZY")

option(LAZY_GLEW_PATH "GLEW directory" ../glew)
option(LAZY_GLFW_PATH "GLFW directory" ../glfw)

set(CMAKE_CXX_FLAGS "-std=c++11")

include_directories(includes/LZ/ ${LAZY_GLEW_PATH}/include/ ${LAZY_GLFW_PATH}/include/)

file(GLOB_RECURSE source_files src/*)
add_library(LAZY STATIC ${source_files})

target_link_libraries(LAZY glfw glew)
target_include_directories(LAZY PUBLIC ${OPENGL_INCLUDE_DIR} deps/glew/include)
target_link_libraries(LAZY ${OPENGL_gl_LIBRARY})
