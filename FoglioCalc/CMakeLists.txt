cmake_minimum_required(VERSION 3.7)
cmake_minimum_required(VERSION 3.16)
project(FoglioCalc)

set(CMAKE_CXX_STANDARD 17)

# Required if: 1) using macOS and 2) using Brew
#set(CMAKE_PREFIX_PATH "/usr/local/Cellar/qt/5.12.3/lib/cmake/")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
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
target_include_directories(FoglioCalc PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")

# Test
find_package(Qt5Test REQUIRED)
# Unit testing had to add these
add_executable(MathTest TestMath.cpp TableMath.h TableMath.cpp)
add_test(NAME MathTest COMMAND MathTest)
target_link_libraries(MathTest PRIVATE Qt5::Test Qt5::Widgets)
target_include_directories(MathTest PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")


