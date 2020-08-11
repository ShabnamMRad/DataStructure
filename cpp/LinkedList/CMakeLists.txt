add_library(
    Listlib
    src/LinkedList/LinkedList.hpp
    src/LinkedList/LinkedList.cpp
)

target_include_directories(Listlib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")