cmake_minimum_required(VERSION 3.12)
set(CMAKE_VERBOSE_MAKEFILE ON)
project(Game)

# Variable configuration
set(GLFW_DIR ../../deps_build/glfw)
set(GLFW_INCLUDE_DIR ../../deps_src/glfw/include)
set(GLAD_DIR ../common/GLAD)
set(WINDOWS_GLFW_LIB_DEBUG_DIR ${GLFW_DIR}/src/Debug)
set(WINDOWS_GLFW_LIB_RELEASE_DIR ${GLFW_DIR}/src/Release)
set(LINUX_GLFW_LIB_DIR ${GLFW_DIR}/src)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)  # You can adjust this to your preferred C++ version


# Executable configuration
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${EXECUTABLE_OUTPUT_PATH}/Debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${EXECUTABLE_OUTPUT_PATH}/Release)

# Source code configuration
set(SOURCE_FILES src/main.cpp
    ${GLAD_DIR}/src/glad.c
    ../MinimalGameEngine/src/GameEngine/GameEngine.cpp
    )

# Header files configuration
include_directories(${GLFW_INCLUDE_DIR})
include_directories(${GLAD_DIR}/include)
include_directories(../MinimalGameEngine/include)

add_executable(Game ${SOURCE_FILES})

if (WIN32)
    # Windows
    target_link_libraries(Game
        debug ${WINDOWS_GLFW_LIB_DEBUG_DIR}/glfw3
        optimized ${WINDOWS_GLFW_LIB_RELEASE_DIR}/glfw3
    )
    target_link_libraries(Game opengl32)
elseif (UNIX)
    # Linux
    get_filename_component( ABSOLUTE_LINUX_GLFW_LIB_DIR "${CMAKE_CURRENT_SOURCE_DIR}/${LINUX_GLFW_LIB_DIR}" ABSOLUTE)
    target_link_libraries(Game
        debug ${ABSOLUTE_LINUX_GLFW_LIB_DIR}/libglfw3.a
        optimized ${ABSOLUTE_LINUX_GLFW_LIB_DIR}/libglfw3.a
    )
    find_package(OpenGL REQUIRED)
    target_link_libraries(Game ${OPENGL_LIBRARIES})
else()
    message(FATAL_ERROR "Unsupported platform")
endif()
