cmake_minimum_required(VERSION 3.5)
project(
    JoyChapter2
    LANGUAGES C
)

include(CTest)

add_library(hash hash.c)
add_library(hash_flex hash_flex.c)

add_executable(hash_test hash_test.c)
target_link_libraries(hash_test hash)
add_test(
    NAME hash_test 
    COMMAND hash_test
)

add_executable(hash_flex_test hash_flex_test.c)
target_link_libraries(hash_flex_test hash)
add_test(
    NAME hash_flex_test 
    COMMAND hash_flex_test
)