/*
默认情况下，c++编译器至少给一个类添加3个函数
1. 默认构造函数（无参，函数体为空）
2. 默认析构函数（无参，函数体为空）
3. 默认拷贝构造函数，对属性值进行拷贝

调用规则：
1. 如果用户定义有参构造函数，c++不再提供默认无参构造，但是会提供默认拷贝构造
2. 如果用户定义拷贝构造函数，c++不再提供其他普通构造函数
*/

#include<iostream>
//1. C++会给每个类添加至少3个函数
using namespace std;

class Person
{
public:
    int m_Age;
    Person(){
        cout << "Person default constructor" << endl;
    }

    Person(int age){
        cout << "Person param constructor" << endl;
        m_Age = age;
    }

    // Person(const Person &p){
    //     cout << "Person copy constructor" << endl;
    //     m_Age = p.m_Age;
    // }

    ~Person(){
        cout << "Person default deconstructor" << endl;
    }
};

void test01(){
    Person p;
    p.m_Age = 18;
    Person p2(p);

    cout << "p2 age is: "<< p2.m_Age << endl;
}

void test02(){
    Person p(18);
}

int main(){
    // test01();
    test02();
    return 1;
}