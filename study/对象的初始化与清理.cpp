/*
构造函数语法：类名(){}
1. 没有返回值也不写void
2. 函数名称与类名相同
3. 构造函数可以有参数，因此可以发生重载
4. 程序在调用对象时候会自动调用构造，无需手动调用，且只会调用一次
析构函数语法： ~类名(){}
1. 析构函数，没有返回值也不写void
2. 函数名称与类名相同，在名称前加上~
3. 析构函数不可以有参数，因此不可以发生重载
4. 程序在对象销毁前自动调用析构，无需手动调用，且只会调用一次

构造析构都得有，没有提供的话的话编译器会提供一个空实现

*/
#include <iostream>
using namespace std;

// 1. 构造函数 进行初始化操作
class Person{
public:
    Person(){cout << "Person construct\n";}
    ~Person(){cout << "Person xigou";}
};


void test01(){
    Person p;
}


int main(){
    test01();
    return 0;
}