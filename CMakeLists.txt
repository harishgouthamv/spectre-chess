cmake_minimum_required(VERSION 3.10)

project(spectre-chess VERSION 0.1)

set(TARGET_NAME spectre-chess)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#find_package(Boost REQUIRED)
find_package(Threads REQUIRED)

include_directories(
    source/lifecycle/inc
    source/uci/inc
)

add_executable(${TARGET_NAME}
    source/lifecycle/src/main.cpp
    source/lifecycle/src/lifecycle.cpp
    source/uci/src/uci.cpp
)

configure_file(source/config/spectre_chess_config.hpp.in spectre_chess_config.hpp)

target_include_directories(${TARGET_NAME} PUBLIC "${PROJECT_BINARY_DIR}")

target_link_libraries(${TARGET_NAME} PRIVATE Threads::Threads)