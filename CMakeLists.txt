cmake_minimum_required(VERSION 3.12.4)

# Set project data
set(PROJECT_NAME "EEZ_FRAMEWORK")
set(BUILD_NUMBER "0")

# eez-framework
include_directories(
    eez-framework/src
)
add_definitions(-DEEZ_FOR_LVGL -DEEZ_PLATFORM_PICO)
file(GLOB_RECURSE EEZ_FRAMEWORK_SOURCES
    eez-framework/src/eez/*.cpp
    eez-framework/src/eez/*.c
)
# /eez-framework
