cmake_minimum_required(VERSION 3.0)
project(VideoStream)
#find_package(OpenCV REQUIRED )




set(SOURCES
        main.cpp
)



add_executable(executable ${SOURCES})

target_link_libraries(executable
        uvgrtp
)



target_include_directories(executable PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/)
