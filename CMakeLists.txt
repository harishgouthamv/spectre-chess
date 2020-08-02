cmake_minimum_required(VERSION 3.18)

project(spectre-chess VERSION 0.1)

set(TARGET_NAME spectre-chess)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(inc)

add_executable(${TARGET_NAME}
               src/main.cpp
               src/uci/interface.cpp
                )

configure_file(config/spectre_chess_config.h.in spectre_chess_config.h)

target_include_directories(${TARGET_NAME} PUBLIC "${PROJECT_BINARY_DIR}")
