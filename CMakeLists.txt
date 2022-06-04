cmake_minimum_required(VERSION 3.19 FATAL_ERROR)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project("ispctest" LANGUAGES CXX ISPC)

add_executable(
	ispctest
	src/ispctest.cpp
	src/kernel.ispc
)
target_include_directories(
	ispctest
	PRIVATE
	${CMAKE_CURRENT_SOURCE_DIR}/src
	${CMAKE_CURRENT_BUILD_DIR}
)
target_link_libraries(
	ispctest
)
set_property(TARGET ispctest PROPERTY ISPC_INSTRUCTION_SETS avx2-i64x4)