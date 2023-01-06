#include <iostream>
#include <string>
#include <tclap/CmdLine.h>
#include "sortingcpp/sorter.hpp"


int main(int argc, char** argv)
{
    try
    {
        TCLAP::CmdLine cmd("Enter Numbers for sorting", ' ', "0.9");
        TCLAP::ValueArg<std::string> algoArg("a", "algorithm", "State the Algorithm you want to use to sort the numbers: ", true, "BubbleSort", "string");
        TCLAP::ValueArg<std::string> numbersArg("n", "numbers", "Type the numbers to sort separated by white spaces: ", true, "1", "string");
        
        cmd.add(algoArg);
        cmd.add(numbersArg);
        
        
        cmd.parse( argc, argv );

        std::string numberString = numbersArg.getValue();
        std::string selectedAlgo = algoArg.getValue();

        sorter::Sorter sorter(numberString, selectedAlgo);

        


    } 
    catch (TCLAP::ArgException &e)  // catch exceptions
    { 
        std::cerr << "error: " << e.error() << " for arg " << e.argId() << std::endl; 
    }
}