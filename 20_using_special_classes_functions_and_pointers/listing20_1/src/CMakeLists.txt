cmake_minimum_required(VERSION 3.17.2)

# Set the project name
project(listing)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add executable target to be built
add_executable(listing20_1 listing20_1.cpp)

# Install built executable to "bin" sub-directory
install(TARGETS listing20_1 DESTINATION ${PROJECT_SOURCE_DIR}/bin)


