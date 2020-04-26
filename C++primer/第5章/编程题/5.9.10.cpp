#include <iostream>

int main()
{
    using namespace std;
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    if (row > 0)
    {
        for(int i=1; i <= row; i++)
        {
            for(int j=0; j <= row-i-1; j++) cout << ".";
            for(int k = 0; k < i; k++) cout << "*";
            cout << endl;
        }
    }
}