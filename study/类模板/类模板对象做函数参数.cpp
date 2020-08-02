// 类模板对象做函数参数.cpp
/*
类模板实例化出的对象，向函数传参的方式
一共有三种传入方式：
1 指定传入的类型    --直接显示对象的数据类型  常用
2 参数模板化        --将对象中的参数变为模板进行传递
3 整个类模板化      --将这个对象类型模板化进行传递
*/
#include<iostream>
#include<string>
using namespace std;

template<class T1, class T2>
class Person
{
    public:
        Person(T1 name, T2 age){
            this->m_Name = name;
            this->m_Age = age;
        }

        void showPerson()
        {
            cout << this->m_Age << endl;
            cout << this->m_Name << endl;
        }
        T1 m_Name;
        T2 m_Age;
};
// 1 指定传入的类型    --直接显示对象的数据类型
void printPerson1(Person<string, int>&p)
{
    p.showPerson();
};

// 2 参数模板化        --将对象中的参数变为模板进行传递
template<class T1, class T2>
void printPerson2(Person<T1, T2>&p)
{
    p.showPerson();
    cout << "T1 type is :" << typeid(T1).name() << endl;
    cout << "T2 type is :" << typeid(T2).name() << endl;
};

// 3 整个类模板化      --将这个对象类型模板化进行传递
template<class T>
void printPerson3(T &p)
{
    p.showPerson();
    cout << "T type is :" << typeid(T).name() << endl;
};


void test01()
{
    Person<string, int>p("wukong", 100);
    printPerson1(p);
};

void test02()
{
    Person<string, int>p("bajie", 90);
    printPerson2(p);
};

void test03()
{
    Person<string, int>p("tangseng", 10);
    printPerson3(p);
};
int main()
{
    test01();
    test02();
    test03();
    return 0;
}