# include<iostream>
#include <array>

int main()
{
    using namespace std;
    array<int, 3> grade;
    float ave;
    for(int i=0; i<3; i++)
    {
        cout << "Enter your grades:";
        cin >>grade[i];
    }
    ave = (grade[0] + grade[1] + grade[2]) / 3.0;
    cout << "Your average grade is:" << ave << endl;
}