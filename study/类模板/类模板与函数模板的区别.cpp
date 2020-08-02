// 类模板与函数模板的区别.cpp
/*
区别：
1 类模板没有自动类型推导的使用方式
2 类模板在模板参数列表中可以有默认参数

*/

#include<iostream>
#include<string>
using namespace std;


template<class NameType, class AgeType = int> //指定默认参数类型
class Person
{
    public:
        Person(NameType name, AgeType age)
        {
            this->m_Age = age;
            this->m_Name = name;
        }

        void showPerson()
        {
            cout << this->m_Age << endl;
            cout << this->m_Name << endl;
        }
        NameType m_Name;
        AgeType m_Age;
};

// 1 类模板没有自动类型推导的使用方式
void test01()
{
    // Person p("wukong", 1000); 错误
    Person<string, int> p1("wukong", 99); //正确，只能用显示指定类型
    p1.showPerson();
}

// 2 类模板在模板参数列表中可以有默认参数
void test02()
{
    Person<string> p1("bajie", 99); //正确，只能用显示指定类型
    p1.showPerson();
}
int main()
{
    test01();
    test02();
    return 0;
}