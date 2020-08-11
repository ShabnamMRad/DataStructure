add_library(
    DoublyListlib
    src/DoublyLinkedList/DoublyLinkedList.hpp
    src/DoublyLinkedList/DoublyLinkedList.cpp
)

target_include_directories(DoublyListlib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")