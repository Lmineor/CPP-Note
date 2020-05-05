#include<iostream>

double calculate(double x, double y, double (* pt)(double x, double y));
double add(double x, double y);

int main()
{
    using namespace std;
    
    double x, y;
    cout << "Enter your #1 num: ";
    cin >> x;
    cout << "Enter your #2 num: ";
    while(cin >> y)
    {
        double q = calculate(x, y, add);
        cout << q << endl;
        cout << "Enter your #1 num: ";
        cin >> x;
        cout << "Enter your #2 num: ";
    }
}


double add(double x, double y)
{
    return x + y;
}

double calculate(double x, double y, double (* pt)(double x, double y))
{
    return (* pt)(x, y);
}