#include <iostream>

using namespace std;

int main()
{
    char i = 'A';
    void *single_quotation = &i;
    // *single_quotation = "A";

    cout << single_quotation << endl;
    return 1;
}

