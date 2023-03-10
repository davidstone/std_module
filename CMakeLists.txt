# Copyright David Stone 2023.
# Distributed under the Boost Software License, Version 1.0.
# (See accompanying file LICENSE_1_0.txt or copy at
# http://www.boost.org/LICENSE_1_0.txt)

cmake_minimum_required(VERSION 3.26 FATAL_ERROR)

project(std_module LANGUAGES CXX)

get_directory_property(has_parent PARENT_DIRECTORY)
if (NOT has_parent)
	set(CMAKE_CXX_STANDARD 23)
	set(CMAKE_CXX_STANDARD_REQUIRED On)
	set(CMAKE_CXX_EXTENSIONS Off)

	set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "2182bf5c-ef0d-489a-91da-49dbc3090d2a")
	set(CMake_TEST_CXXModules_UUID "a246741c-d067-4019-a8fb-3d16b0c9d1d3")
	set(CMAKE_EXPERIMENTAL_CXX_MODULE_DYNDEP 1)

	add_subdirectory(dependencies/cmake_strict_defaults)
endif()

add_library(std_module STATIC)

target_link_libraries(std_module
	PUBLIC
		strict_defaults_interface
	PRIVATE
		strict_defaults
)

target_sources(std_module PUBLIC
	FILE_SET CXX_MODULES
	BASE_DIRS "${CMAKE_CURRENT_SOURCE_DIR}"
	FILES
		source/std_module.cpp
)
