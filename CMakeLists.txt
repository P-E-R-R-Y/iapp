cmake_minimum_required(VERSION 3.14)
project(iapp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)


## ----------- Executable -----------
set(SOURCE_FILES
    no_source.cpp
)

add_library(${PROJECT_NAME} ${SOURCE_FILES})

target_link_libraries(${PROJECT_NAME} PUBLIC
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/includes/
)

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra)

message(STATUS "${CMAKE_BIN_SHARED}")
