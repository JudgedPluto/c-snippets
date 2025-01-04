cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Specify the C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Add include directory
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add executable
add_executable(program
    src/main.c
    src/snippets.c
)
