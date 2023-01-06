#include "sortingcpp/sorter.hpp"

namespace sorter
{

Sorter::Sorter()
{
    
}

void Sorter::parseCommands(int argc, char** argv)
{
    try
    {
        TCLAP::CmdLine cmd("Enter Numbers for sorting", ' ', "0.9");
        TCLAP::ValueArg<std::string> algoArg("a", "algorithm", "State the Algorithm you want to use to sort the numbers: ", true, "BubbleSort", "string");
        TCLAP::ValueArg<std::string> numbersArg("n", "numbers", "Type the numbers to sort separated by white spaces: ", true, "1", "string");
        
        cmd.add(algoArg);
        cmd.add(numbersArg);
        
        
        cmd.parse( argc, argv );

        setStringToSort(numbersArg.getValue());
        setAlgo(algoArg.getValue());

    } 
    catch (TCLAP::ArgException &e)  // catch exceptions
    { 
        std::cerr << "error: " << e.error() << " for arg " << e.argId() << std::endl; 
    }

    std::cout << "Numbers to sort: " << getStringToSort() << std::endl;
    std::cout << "Will use the " << getAlgo() << " Algorithm!" << std::endl;
}

void Sorter::setStringToSort(std::string number_string)
{
    str_to_sort_ = number_string;
}

std::string Sorter::getStringToSort()
{
    return str_to_sort_;
}

void Sorter::setAlgo(std::string algo)
{
    algorithm_choice_ = algo;
}

std::string Sorter::getAlgo()
{
    return algorithm_choice_;
}
}

