cmake_minimum_required(VERSION 3.16)
project(EchoServer)

set(CMAKE_CXX_STANDARD 11)
aux_source_directory(. SRC_LIST)
aux_source_directory(../mSkd MSRC_LIST)
add_executable(EchoServer ${SRC_LIST} ${MSRC_LIST})