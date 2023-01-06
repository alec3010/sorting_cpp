cmake_minimum_required(VERSION 3.22)

project(
    SortingExample
    VERSION 1.0
    LANGUAGES CXX
)

add_library(BubbleSort src/bubble_sort.cpp include/bubble_sort.h)
add_library(QuickSort src/quick_sort.cpp include/quick_sort.h)
add_library(Sorter src/sorter.cpp include/sorter.h)


add_executable(SortingApp src/sorting_app.cpp)


