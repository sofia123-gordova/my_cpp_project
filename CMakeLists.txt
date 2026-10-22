cmake_minimum_required(VERSION 3.16)

project(arraylib VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")

add_library(arraylib SHARED src/arraylib.cpp)

target_include_directories(arraylib PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

target_compile_definitions(arraylib PRIVATE ARRAYLIB_BUILD)

if(MSVC)
    target_compile_options(arraylib PRIVATE /W4)
else()
    target_compile_options(arraylib PRIVATE -Wall -Wextra -Wpedantic)
endif()

add_executable(app main.cpp)
target_link_libraries(app PRIVATE arraylib)

set_target_properties(app PROPERTIES BUILD_RPATH "$ORIGIN")

include(CTest)

if(BUILD_TESTING)
    foreach(name IN ITEMS unit integration)
        add_executable(test_${name} tests/test_${name}.cpp)
        target_link_libraries(test_${name} PRIVATE arraylib)

        if(MSVC)
            target_compile_options(test_${name} PRIVATE /UNDEBUG)
        else()
            target_compile_options(test_${name} PRIVATE -UNDEBUG)
        endif()

        set_target_properties(test_${name} PROPERTIES
            BUILD_RPATH "$ORIGIN"
        )

        add_test(NAME ${name} COMMAND test_${name})
    endforeach()
endif()