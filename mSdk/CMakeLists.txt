cmake_minimum_required(VERSION 3.16)
project(mSkd)

set(CMAKE_CXX_STANDARD 11)
aux_source_directory(. SRC_LIST)
add_executable(mSkd ${SRC_LIST})