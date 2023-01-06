namespace sort
{

class Sort
{

    private:
        std::vector<float> to_sort_;
        
    public:
        
        void setVectorToSort(std::vector<float>);
        std::vector getVectorToSort()
        void sort();



};

class QuickSort: public Sort
{
    
};

class BubbleSort: public Sort
{
    
};

}