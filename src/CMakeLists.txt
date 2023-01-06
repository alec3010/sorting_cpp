cmake_minimum_required(VERSION 3.22)

set(HEADER_LIST "${SortingExample_SOURCE_DIR}/include/sortingcpp/sort.hpp"
                "${SortingExample_SOURCE_DIR}/include/sortingcpp/sorter.hpp"
                ${Boost_LIBRARY_DIRS})

find_package(Boost REQUIRED)

add_library(Sort sort.cpp  ${HEADER_LIST})
target_include_directories(Sort PUBLIC ../include)

target_compile_features(Sort PUBLIC cxx_std_11)

add_library(Sorter sorter.cpp ${HEADER_LIST})
target_include_directories(Sorter PUBLIC ../include )
target_link_libraries(Sorter ${Boost_LIBRARIES})
target_compile_features(Sorter PUBLIC cxx_std_11)

                
source_group(
    TREE "${PROJECT_SOURCE_DIR}/include"
    PREFIX "Header Files"
    FILES ${HEADER_LIST})