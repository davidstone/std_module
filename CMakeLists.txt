# Copyright David Stone 2023.
# Distributed under the Boost Software License, Version 1.0.
# (See accompanying file LICENSE_1_0.txt or copy at
# http://www.boost.org/LICENSE_1_0.txt)

cmake_minimum_required(VERSION 3.28 FATAL_ERROR)

project(std_module LANGUAGES CXX)

get_directory_property(has_parent PARENT_DIRECTORY)
if (NOT has_parent)
	set(CMAKE_CXX_STANDARD 26)
	set(CMAKE_CXX_STANDARD_REQUIRED On)
	set(CMAKE_CXX_EXTENSIONS Off)

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
