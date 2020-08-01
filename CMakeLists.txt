cmake_minimum_required(VERSION 3.18)

project(spectre-chess VERSION 0.1)

set(TARGET_NAME spectre-chess)

add_executable(${TARGET_NAME} src/main.cpp)

configure_file(config/spectre_chess_config.h.in spectre_chess_config.h)

target_include_directories(${TARGET_NAME} PUBLIC "${PROJECT_BINARY_DIR}")
