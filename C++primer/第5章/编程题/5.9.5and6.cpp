#include <iostream>
#include<string>

const int Months = 12;
const int Years = 3;

int main()
{
    using namespace std;
    string month[Years][Months] = {
        {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"}, 
        {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"},
        {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"}
        };
    int sales[Years][Months];
    int total[Years] = {0, 0, 0};
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<Months; i++)
            {
                cout << "Enter " << j+1 << " year" << i+1 << "month" << ": ";
                cin >> sales[j][i];
                total[j] += sales[j][i];
            }
        cout << j+1 << "year" <<"total is : " << total[j] << endl;
    }
    cout << "3 year total is: " << total[0] + total[1] + total[2];
    ;
}