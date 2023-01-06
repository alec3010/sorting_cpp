#include "sortingcpp/sorter.hpp"

namespace sorter
{

Sorter::Sorter(std::string numbers, std::string algorithm)
{
    std::cout << "Numbers to sort: " << numbers << std::endl;
    std::cout << "Will use the " << algorithm << " Algorithm!" << std::endl;
}


}

