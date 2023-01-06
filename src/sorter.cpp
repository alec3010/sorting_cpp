#include "sortingcpp/sorter.hpp"

namespace sorter
{

    Sorter::Sorter(int argc, char** argv)
    {
        parseCommands(argc, argv);
        convertToFloatVector();

        sort_ = new sort::Sort(floats_to_sort_);
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

    void Sorter::convertToFloatVector()
    {
        std::vector<std::string> strs;
        boost::split(strs, str_to_sort_, boost::is_any_of(" "));
        //std::cout << strs << std::endl; 
        for (auto it = begin (strs); it != end(strs); it++)
        {
            floats_to_sort_.push_back(std::stof(*it));
        }
        
    }

    std::vector<float> Sorter::sortWSelected()
    {
        if(algorithm_choice_ == "BubbleSort")
        {
            floats_sorted_ = sort_->bubbleSort();
        }
        else if(algorithm_choice_ == "QuickSort")
        {
            floats_sorted_ = sort_->quickSort();
        }
        return floats_sorted_;
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