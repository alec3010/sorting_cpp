#include <boost/algorithm/string.hpp>
#include <tclap/CmdLine.h>
#include "sortingcpp/sort.hpp"

namespace sorter
{

    class Sorter
        {   
        private:
            std::string str_to_sort_;
            std::string algorithm_choice_;
            std::vector<float> floats_to_sort_;
            std::vector<float> floats_sorted_;
            sort::Sort* sort_;
                

        public:
            Sorter(int, char**);
            void parseCommands(int, char**);
            void convertToFloatVector();

            std::vector<float> sortWSelected();
            

            void setStringToSort(std::string);
            std::string getStringToSort();

            void setAlgo(std::string);
            std::string getAlgo();

        };


}