cmake_minimum_required(VERSION 3.12)
project(INSERT_SORT)

message(STATUS "当前编译类型:${CMAKE_BUILD_TYPE}")

# 通过vscode下方的build variant按钮更改CMAKE_BUILD_TYPE的值
if(CMAKE_BUILD_TYPE STREQUAL Debug)
	set(CMAKE_C_FLAGS_DEBUG "$ENV{CFLAGES} -O0 -Wall -g2 -ggdb")
	message(STATUS "编译信息:${CMAKE_C_FLAGS_DEBUG}")
elseif(CMAKE_BUILD_TYPE STREQUAL Release)
	set(CMAKE_C_FLAGS_RELEASE "$ENV{CFLAGES} -O3 -Wall")
	message(STATUS "编译信息:${CMAKE_C_FLAGS_RELEASE}")
else()
	message(STATUS "Default")
endif()

include_directories(
	${PROJECT_SOURCE_DIR}/include
)

set(SRC
	${PROJECT_SOURCE_DIR}/src/Insert_Sort.c
)
set(CMAKE_BUILD_RPATH)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_library(Staticlib_Insert_Sort STATIC ${SRC})
add_executable(Insert_Sort main.c)
target_link_libraries(Insert_Sort Staticlib_Insert_Sort)