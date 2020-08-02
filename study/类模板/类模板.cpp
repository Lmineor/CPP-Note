// 类模板.cpp
/*
类模板的作用：
建立一个通用类，类中的成员数据类型可以不具体指定，用一个虚拟的类型来代表

语法：
template<class T>
类
*/

#include<iostream>
#include<string>
using namespace std;

//类模板
template<class NameType, class AgeType>
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


void test01()
{
    Person<string, int> p1("wukong", 99);
    p1.showPerson();
}

int main()
{
    test01();
    return 0;
}