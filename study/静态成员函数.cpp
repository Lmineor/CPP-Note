/*
静态成员函数
所有对象共享同一个函数
静态成员函数只能访问静态成员变量
两种访问方式：
1. 通过对象访问
2. 通过类名访问
静态成员函数有访问权限
*/


#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    static void func(){
        A = 100; // 静态成员函数可以访问静态成员变量
        // B = 200; // 静态成员函数不可以访问非静态成员变量，无法区分到底是哪个对象的B属性
        cout << "call static void func\n";
    }
    static int A;   //静态成员变量
    int B; //非静态成员变量
private:
    static void func2(){

    }
};

int Person::A = 0;

void test01(){
    // 1. 通过对象访问
    Person p;
    p.func();
    /// 2. 通过类名访问
    Person::func();
    // Person::func2(); //静态成员函数有访问权限

}

int main(){
    test01();
    return 0;
}