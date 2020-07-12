#include <iostream>
#include <cstring>
int main(void)
{
    int * p = (int *)0x11000;
    std::cout << *p;
    return 0;
}