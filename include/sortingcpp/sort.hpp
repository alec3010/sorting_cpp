#include <vector>
#include <string>

namespace sort
{

    class Sort
    {

        private:
            std::vector<float> to_sort_;
            std::vector<float> sorted_;
            std::string algorithm_choice_;
        public:
            Sort(std::vector<float> to_sort);
            std::vector<float> quickSort();
            std::vector<float> bubbleSort();

            void setVectorToSort(std::vector<float>);
            std::vector<float> getVectorToSort();
            

            void setAlgo(std::string);
            std::string getAlgo();

    };

    class QuickSort: public Sort
    {
        
    };

    class BubbleSort: public Sort
    {
        
    };

}