cmake_minimum_required(VERSION 3.10)

project("Qt_CMake_Test" VERSION 0.1.0)

if(NOT MSVC)
    message(FATAL_ERROR "Can only be compiled with MSVC!")
endif()

set(PROJECT_NAME main)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "${CMAKE_PREFIX_PATH};$ENV{QT_HOME}/5.12.12/msvc2017_64") 
# set(Qt5_DIR "$ENV{QT_HOME}/5.12.12/msvc2017_64/lib/cmake/Qt5") # 也能用，官方更推荐上一种
find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_compile_options("/utf-8") 

add_executable(main
    "src/TheMain.h"
    "src/TheMain.cpp"
)

target_include_directories(${PROJECT_NAME} PRIVATE include)
target_link_directories(${PROJECT_NAME} PRIVATE lib)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Widgets)

set_target_properties(${PROJECT_NAME}
    PROPERTIES
    C_STANDARD 11
    CXX_STANDARD 17
    C_STANDARD_REQUIRED ON
    CXX_STANDARD_REQUIRED ON
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib"
)
