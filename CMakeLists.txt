cmake_minimum_required(VERSION 3.16)

project(Skin++ VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

qt_standard_project_setup()

qt_add_executable(Skin++
    src/main.cpp
    src/ColorWheel.cpp
    include/ColorWheel.hpp
    src/ColorSelector.cpp
    include/ColorSelector.hpp
)

target_include_directories(Skin++ PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

target_link_libraries(Skin++ PRIVATE Qt6::Widgets)

set_target_properties(Skin++ PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)
