# CMakeLists.txt

cmake_minimum_required(VERSION 3.22)
project(Span)

# Set the C++ standard to C++98
set(CMAKE_CXX_STANDARD 98)

# Set the C++ compiler
set(CMAKE_CXX_COMPILER /opt/homebrew/opt/llvm/bin/clang++)

# Add the executable target
file(GLOB sources main.cpp *.cpp *.hpp)
add_executable(Span "")
target_link_libraries(Span PUBLIC SpanLib)
target_include_directories(Span PUBLIC ./src)
target_sources(Span PRIVATE ${sources})
set_target_properties(Span PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})

# Set compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -std=c++98 -fno-limit-debug-info")
# Generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

enable_testing()

add_subdirectory(src)

add_subdirectory(tests)