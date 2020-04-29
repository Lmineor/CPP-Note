#include <iostream>

float harmonic_mean(float x, float y);

int main()
{
    using namespace std;
    float num1, num2;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    while (num1 && num2)
    {
        cout << "harmonic mean is " << harmonic_mean(num1, num2) << endl;
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
    }
    cout << "Bye\n";
}

float harmonic_mean(float x, float y)
{
    return 2.0*x*y/(x+y);
}