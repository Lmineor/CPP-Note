#include <iostream>
#include<array>
#include<string>

// debug

namespace VER_A{
    //constant data
    const int Seasons = 4;
    const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

    struct expenses
    {
        double expenses
    };

    //function to modify array object
    void fill(double *pa, int Seasons);
    // function that uses array object without modifying it
    void show(const double *da, int Seasons);

    void fill(double *pa, int Seasons)
    {
        using namespace std;
        for(int i = 0; i < Seasons; i++)
        {
            cout << "Enter " << Snames[i] << " expenses: ";
            cin >> pa[i];
        }
    }

    void show(const double *da, int Seasons)
    {
        using namespace std;
        double total = 0.0;
        cout << "\nEXPENSES\n";
        for(int i = 0; i < Seasons; i++)
        {
            cout << Snames[i] << ": $" << da[i] << endl;
            total += da[i];
        }
        cout << "Total Expenses: $" << total << endl;
    }
}

namespace VER_B{
    void fill(double *pa, int Seasons);
}


int main()
{
    double expenses[Seasons];
    VER_A::fill(expenses, Seasons);
    VER_A::show(expenses, Seasons);
    return 0;
}