#include <iostream>

using namespace std;

template <class T> //函数模板声明
void Swap(T &a, T &b);

int main()
{
    int i = 20;
    int j = 10;
    cout<<"i,j"<<i<<" "<<j<<" "<<endl;
    cout<<"使用swap函数"<<endl;
    Swap(i, j);
    cout<<"Now i j is :"<<i<<" "<<j<<" "<<endl;
    
    double x = 20.5;
    double y = 10.5;
    cout<<"x,y"<<x<<" "<<y<<" "<<endl;
    cout<<"使用swap函数"<<endl;
    Swap(x, y);
    cout<<"Now x y is :"<<x<<" "<<y<<" "<<endl;
    return 0;
}


template <class T> //函数模板定义
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}