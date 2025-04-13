cmake_minimum_required(VERSION 3.22)
project(color_codes VERSION 0.0.2)
project(color_codes-example VERSION 0.0.1)
set(CMAKE_CXX_STANDARD 11)


add_library(color_codes STATIC ANSIConsoleColors.h)
set_target_properties(color_codes PROPERTIES LINKER_LANGUAGE CXX)

add_executable(color_codes-example example.cpp)
target_link_libraries(color_codes-example color_codes)

set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/${PROJECT_NAME}")
set_target_properties(${PROJECT_NAME} PROPERTIES INTERMEDIATE_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/obj/${PROJECT_NAME}")
set_target_properties(${PROJECT_NAME} PROPERTIES DEBUG_POSTFIX "-debug")
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "${PROJECT_NAME}-${CMAKE_SYSTEM_NAME}-${CMAKE_SYSTEM_PROCESSOR}")

target_compile_options(${PROJECT_NAME} PRIVATE -Os)

# Set compile options
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libgcc -static-libstdc++ -static -lpthread")
