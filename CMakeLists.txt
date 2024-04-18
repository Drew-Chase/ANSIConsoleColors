cmake_minimum_required(VERSION 3.0.0)
project(color_codes VERSION 0.0.1)
project(color_codes-example VERSION 0.0.1)
set(CMAKE_CXX_STANDARD 17)

execute_process(
        COMMAND bash -c "g++ --version"
        OUTPUT_VARIABLE GCC_VERSION
)

add_library(color_codes INTERFACE
        example.cpp)

add_executable(color_codes-example example.cpp)
target_link_libraries(color_codes-example color_codes)

set_target_properties(${PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/${PROJECT_NAME}")
set_target_properties(${PROJECT_NAME} PROPERTIES INTERMEDIATE_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/obj/${PROJECT_NAME}")
set_target_properties(${PROJECT_NAME} PROPERTIES DEBUG_POSTFIX "-debug")
set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "${PROJECT_NAME}-${CMAKE_SYSTEM_NAME}-${CMAKE_SYSTEM_PROCESSOR}")

target_compile_options(${PROJECT_NAME} PRIVATE -Os)

# Set compile options
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libgcc -static-libstdc++ -static -lpthread")

# Strip debug symbols
if (CMAKE_BUILD_TYPE MATCHES "Release|RelWithDebInfo")
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
            COMMAND ${CMAKE_STRIP} "$<TARGET_FILE:${PROJECT_NAME}>")
endif ()
