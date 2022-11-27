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
