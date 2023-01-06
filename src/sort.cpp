#include "sortingcpp/sort.hpp"

namespace sort
{

    Sort::Sort(std::vector<float> to_sort)
    {
        setVectorToSort(to_sort);
        
    }
    void Sort::setAlgo(std::string algo)
    {
        algorithm_choice_ = algo;
    }

    std::string Sort::getAlgo()
    {
        return algorithm_choice_;
    }

    void Sort::setVectorToSort(std::vector<float> to_sort)
    {
        to_sort_ = to_sort;
    }

    std::vector<float> Sort::getVectorToSort()
    {
        return to_sort_;
    }

    std::vector<float> Sort::bubbleSort()
    {
        return sorted_;
    }
    
    std::vector<float> Sort::quickSort()
    {
        return sorted_;
    }
    
}