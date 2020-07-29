// 类模板中成员函数创建时机.cpp
/*
在调用时才创建
*/
#include<iostream>
#include<string>
using namespace std;

class Person1
{
    public:
        void showPerson1()
        {
            cout << "show person1" << endl;
        }
};


class Person2
{
    public:
        void showPerson2()
        {
            cout << "show person2" << endl;
        }
};

template<class T> //指定默认参数类型
class MyClass
{
    public:
        T obj;

        //类模板中的成员函数
        void fun1()
        {
            obj.showPerson1();
        }
        void fun2()
        {
            obj.showPerson2();
        }
};

void test01()
{
    MyClass<Person1> m;
    m.fun1();
    // m.fun2();
}


int main()
{
    test01();
    return 0;
}