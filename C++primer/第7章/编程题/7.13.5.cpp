#include<iostream>

long long calculate(long n);

int main()
{
    using namespace std;
    long n;
    long long res;
    cout << "Enter the number that you want to calculate(q to quit): \n";
    while(cin >> n && n >=0)
    {
        res = calculate(n);
        cout << n << "! = " << res << endl;
        cout << "Enter the number that you want to calculate(q to quit): \n";
    }
}


long long calculate(long n)
{
    if(n == 0) return 1;
    else return n * calculate(n - 1);
}