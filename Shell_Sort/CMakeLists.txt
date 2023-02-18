cmake_minimum_required(VERSION 3.12)
PROJECT(SHELL_SORT)

message(STATUS "编译类型：${CMAKE_BUILD_TYPE}")

if(CMAKE_BUILD_TYPE STREQUAL Debug)
	set(CMAKE_C_FLAGS_DEBUG "$ENV{CFLAGES} -O0 -Wall -g2 -ggdb")
	message(STATUS "编译选项：${CMAKE_C_FLAGS_DEBUG}")
elseif(CMAKE_BUILD_TYPE STREQUAL Release)
	set(CMAKE_C_FLAGS_RELEASE "$ENV{CFLAGES} -O3 -Wall")
	message(STATUS "编译选项：${CMAKE_C_FLAGS_Release}")
else()
	message(STATUS "Other")
endif()

include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/include
)
set(SRC
	${CMAKE_CURRENT_SOURCE_DIR}/src/Shell_Sort.c
)

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/bin)

add_library(Staticlib_Shell_Sort STATIC ${SRC})
add_executable(Shell_Sort main.c)
target_link_libraries(Shell_Sort Staticlib_Shell_Sort)
