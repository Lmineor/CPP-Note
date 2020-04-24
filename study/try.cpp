#include <iostream>

using namespace std;

int main()
{
    //测试机 64位
    int test8 = 071;
    cout << "071 is " << test8 << endl;
    int test16 = 0xE5;
    cout << "0xE5 is " << test16;
    return 1;
}
// 32 4
// 64 8

// cout <<"size of char16_t is:  "<< sizeof(char16_t) << " bytes" << endl;
// cout <<"size of char32_t is:  "<< sizeof(char32_t) << " bytes" << endl;
// cout <<"size of short is:  "<< sizeof(short) << " bytes" << endl;
// cout <<"size of int is:  "<< sizeof(int) << " bytes" << endl;
// cout <<"size of long is:  "<< sizeof(long) << " bytes" << endl;
// int *p;
// cout <<"size of pointer is:  "<< sizeof(p) << " bytes" << endl;
// cout <<"size of long long is:  "<< sizeof(long long) << " bytes" << endl;
// cout <<"size of foat is:  "<< sizeof(float) << " bytes" << endl;
// cout <<"size of double is:  "<< sizeof(double) << " bytes" << endl;
// cout <<"size of long double is:  "<< sizeof(long double) << " bytes" << endl;