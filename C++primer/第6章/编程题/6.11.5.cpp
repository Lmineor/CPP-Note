#include<iostream>



float varp(int salary);

int main()
{
    using namespace std;
    int salary;
    cout << "enter your salary: ";
    while(cin >> salary && salary >= 0)
    {
        cout << varp(salary) << "tvarps\n";
        cout << "enter your salary: ";
    }
}


float varp(int salary)
{
    if (salary <= 5000) return 0;
    else if (salary <= 15000) return (salary-5000) * 0.1;
    else if (salary <= 35000) return (15000-5000) * 0.1 + (salary-15000) * 0.15;
    else return (15000-5000) * 0.1 + (35000-15000) * 0.15 + (salary-35000) * 0.2;
}