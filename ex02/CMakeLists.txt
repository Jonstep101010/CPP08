# CMakeLists.txt

cmake_minimum_required(VERSION 3.22)
project(Mutated_Abomination)

# Set the C++ standard to C++98
set(CMAKE_CXX_STANDARD 98)

# Set the C++ compiler
set(CMAKE_CXX_COMPILER clang++)

# Add the executable target
file(GLOB sources main.cpp *.cpp *.hpp)
add_executable(Mutated_Abomination "")
target_sources(Mutated_Abomination PRIVATE ${sources})
set_target_properties(Mutated_Abomination PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})

# Set compiler flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -std=c++98 -fno-limit-debug-info")
# Generate compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

enable_testing()