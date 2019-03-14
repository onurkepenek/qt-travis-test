cmake_minimum_required(VERSION 3.0.2 FATAL_ERROR)
set(PROJECT travis-test)
project(${PROJECT})

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

file(GLOB SRCS *.cpp *ui *moc)
message(STATUS "SRCS ${SRCS}")

find_package(Qt5Widgets REQUIRED)
#find_package(Qt5X11Extras REQUIRED QUIET)


include(FindPkgConfig)

include_directories ( ${CMAKE_CURRENT_SOURCE_DIR}
                      ${CMAKE_CURRENT_BINARY_DIR}
)

add_executable ( travis-test ${SRCS} ${RSCS})

target_link_libraries ( travis-test Qt5::Widgets)



