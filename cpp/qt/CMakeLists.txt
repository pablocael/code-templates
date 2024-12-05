cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)

# Set the project name and version
project(MyQtApp VERSION 1.0 LANGUAGES CXX)

# Find the required Qt6 modules
find_package(Qt6 REQUIRED COMPONENTS Core Widgets OpenGLWidgets Charts)

# Add an executable target
add_executable(${PROJECT_NAME} 
    Main.cpp
    MainWindow.cpp
)

# Link the Qt6 libraries to the executable
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Core Qt6::Widgets Qt6::OpenGLWidgets Qt6::Charts)


# Ensure proper include paths are set for Qt6 headers
target_include_directories(${PROJECT_NAME} PRIVATE ${Qt6Core_INCLUDE_DIRS} ${Qt6Widgets_INCLUDE_DIRS} ${Qt6OpenGL_INCLUDE_DIRS} ${Qt6Charts_INCLUDE_DIRS})
