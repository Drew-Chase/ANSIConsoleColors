cmake_minimum_required(VERSION 3.5.0)
project(color_codes VERSION 0.0.2)
project(color_codes-example VERSION 0.0.1)
set(CMAKE_CXX_STANDARD 11)

add_library(color_codes INTERFACE)
target_include_directories(color_codes INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(color_codes PROPERTIES LINKER_LANGUAGE CXX)


# Example project

add_executable(color_codes-example example.cpp)
target_link_libraries(color_codes-example color_codes)

set_target_properties(color_codes-example PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/${PROJECT_NAME}")
set_target_properties(color_codes-example PROPERTIES INTERMEDIATE_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/obj/${PROJECT_NAME}")
set_target_properties(color_codes-example PROPERTIES DEBUG_POSTFIX "-debug")
set_target_properties(color_codes-example PROPERTIES OUTPUT_NAME "${PROJECT_NAME}-${CMAKE_SYSTEM_NAME}-${CMAKE_SYSTEM_PROCESSOR}")

target_compile_options(color_codes-example PRIVATE -Os)

# Set compile options
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libgcc -static-libstdc++ -static -lpthread")
