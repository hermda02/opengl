cmake_minimum_required(VERSION 3.7)
project(hello_window VERSION 0.0.0)

# link_directories(/usr/local/lib)

# set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
# set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
# set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(/home/daniher/libraries/opengl_dev/glfw-3.0.4 /home/daniher/libraries/opengl_dev/glfw-3.0.4/src)

FIND_PACKAGE(X11 REQUIRED)
FIND_PACKAGE(OpenGL REQUIRED)
set(GL_LIBRARY GL GLU X11 Xrandr Xxf86vm Xi)

# find_package(glfw3 REQUIRED) # locate the package and target files generated when GLFW is installed.

pkg_search_module(GLFW REQUIRED glfw3) # CMake commands to find pkg-config packages

include_directories(${GLFW_INCLUDE_DIRS}) # creates the CMake variables you need to use GLFW.
include_directories(${X11_INCLUDE_DIR}) # Get all the x stuff

add_executable(hello_window src/config.h src/main.cpp)
# target_include_directories(hello_window PRIVATE /usr/local/include)
target_link_libraries(hello_window glfw)
target_link_libraries(hello_window OpenGL::GL)
target_link_libraries(hello_window glfw ${GL_LIBRARY} m)