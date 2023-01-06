#include "sortingcpp/sort.hpp"

namespace sorter
{

    class Sorter
        {   
        private:
            std::string str_to_sort_;
                

        public:
            Sorter(std::string numbers, std::string algorithm);
            void setStringToSort(std::string);


        };


}