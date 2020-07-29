#include <iostream>

using namespace std;

struct A
{
    int a;
    double b;
    short c;
    /* data */
};
struct B{
    int a;
    short b;
    double c;
};

typedef int C;
int main(void)
{
    B b;
    C c;
    cout << sizeof(A) << endl;
    cout << sizeof(b)<< endl;
    cout << sizeof(c)<< endl;
    return 0;
}