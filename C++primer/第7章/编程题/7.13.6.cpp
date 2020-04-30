#include <iostream>

const int MaxNums = 10;

int Fill_array(double ar[], int nums);
void Show_array(const double ar[], int nums);
void Reverse_array(double ar[], int nums);

int main()
{
    using namespace std;
    int numsFilled = 0;
    double arrays[MaxNums];
    numsFilled = Fill_array(arrays, MaxNums);
    Show_array(arrays, numsFilled);
    Reverse_array(arrays, numsFilled);
    cout << "After reversed: \n";
    Show_array(arrays, numsFilled);
}

int Fill_array(double ar[], int nums)
{
    int i = 0;
    std::cout << "Enter num: ";
    while(std::cin>>ar[i] && ++i < nums)
    {
        if (i == nums-1)
        {
            std::cout << "Enter the last num: ";
        }
        else
        {
            std::cout << "Enter num: ";
        }
    }
    return i;
}

void Show_array(const double ar[], int nums)
{
    std:: cout << "Now print the array: \n";
    for(int i=0; i<nums; i++)
    {
        std::cout << ar[i] << std::endl;
    }
}

void Reverse_array(double ar[], int nums)
{
    int i = 0;
    double tmp;
    for(i; i< nums/2; i++)
    {
        tmp = ar[i];
        ar[i] = ar[nums-1-i];
        ar[nums-1-i] = tmp;
    }
}