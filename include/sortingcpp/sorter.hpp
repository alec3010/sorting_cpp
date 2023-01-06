#include "sortingcpp/sort.hpp"

namespace sorter
{

    class Sorter
        {   
        private:
            std::string str_to_sort_;
            std::string algorithm_choice_;
                

        public:
            Sorter();
            void setStringToSort(std::string);
            void setAlgo(std::string);
            std::string getStringToSort();
            std::string getAlgo();

            void parseCommands(int, char**);


        };


}