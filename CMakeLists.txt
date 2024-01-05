cmake_minimum_required(VERSION 3.1)
project(
    JoyChapter2
    LANGUAGES C
)

include(CTest)

add_library(hash hash.c)
add_executable(hash_test hash_test.c)
target_link_libraries(hash_test hash)
add_test(
    NAME hash_test 
    COMMAND hash_test
)