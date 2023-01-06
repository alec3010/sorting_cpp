
#include <tclap/CmdLine.h>


class Sort
{

    private:
        std::vector<float> to_sort_;
        
    public:
        
        
        void setVectorToSort(std::vector<float>);

        std::vector<float> sort(std::vector<float>);



};

class QuickSort: public Sort
{

};

class BubbleSort: public Sort
{
    
};