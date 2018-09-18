cmake_minimum_required(VERSION 2.8)

project(callgrind-test)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fPIC -Wall -pedantic -g -ggdb")

FIND_PACKAGE(OpenCV REQUIRED)

#FIND_PACKAGE(Vigra REQUIRED)
#FIND_PACKAGE(HDF5 REQUIRED)
#find_package(Boost COMPONENTS system filesystem iostreams REQUIRED)

add_executable(${PROJECT_NAME} "main.cpp")

#target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})

#message(STATUS ${OpenCV_LIBS})

#target_link_libraries(${PROJECT_NAME}
#    opencv_sfm
#)

target_link_libraries(${PROJECT_NAME}

openblas

)
