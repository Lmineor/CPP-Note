#include <iostream>
#include <array>
#include<cctype>

const int MaxNums = 10;


int main()
{
    using namespace std;
    double donation[MaxNums];
    cout << "Please enter your donations." << endl;
    cout << "You may enter up to "<< MaxNums <<" donations <q to terminate>" << endl;
    cout << "donation #1: ";
    int i = 0;
    while(i < MaxNums && cin >> donation[i])
    {
        if (++i < MaxNums)
        {
            cout << "donation #" << i+1 << ": ";
        }
        //calculate average
    }
    //i 此时为donation的个数
    //求平均值
    double total = 0.0;
    double ave = 0.0;
    int count_to_big_than_ave = 0;
    for (int j=0; j < i ; j++)
    {
        total += donation[j];
    }
    //report resluts
    if(i == 0)
        cout << "No donations!\n";
    else
        cout << total /i << "=average of " << i << " donations\n";
    cout <<"Done\n";
    return 0;
}
