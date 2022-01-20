cmake_minimum_required(VERSION 3.7.0)

if(MINGW)
    message("Hello Mingw!") # 为啥没反应了
endif()

# set(Qt5_DIR "C:/Program_Files/MSYS2_64/ucrt64/qt5-static/lib/cmake/Qt5")
# set(CMAKE_PREFIX_PATH "C:/Program_Files/MSYS2_64/ucrt64/qt5-static")

# message("CMAKE_PREFIX_PATH: ${CMAKE_PREFIX_PATH}")
# message("Qt5_DIR: ${Qt5_DIR}")

project(QT_CPP VERSION 0.1.0)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Wno-invalid-source-encoding")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wno-invalid-source-encoding")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static")
# set(CMAKE_EXE_LINKER_FLAGS "-static")

# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib")
# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib")

add_executable(main
    src/APPMain.cpp
    src/HelloWidget.h
    src/HelloWidget.cpp
)

target_include_directories(main PRIVATE include)
target_link_directories(main PRIVATE lib)
target_link_libraries(main PRIVATE Qt5::Widgets)

set_target_properties(main
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib"
)
