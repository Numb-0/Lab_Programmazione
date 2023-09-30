cmake_minimum_required(VERSION 3.7)
project(FoglioCalc)

set(CMAKE_CXX_STANDARD 11)

# Required if: 1) using macOS and 2) using Brew
#set(CMAKE_PREFIX_PATH "/usr/local/Cellar/qt/5.12.3/lib/cmake/")

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

# Find the QtWidgets library
find_package(Qt5Widgets REQUIRED)

add_executable(FoglioCalc 
    main.cpp
    Observer.h 
    Subject.h 
    Window.h 
    Window.cpp 
    TableMath.h
    TableMath.cpp
    ViewWindow.h
)
# Use the Widgets module from Qt 5.
target_link_libraries(FoglioCalc Qt5::Widgets)