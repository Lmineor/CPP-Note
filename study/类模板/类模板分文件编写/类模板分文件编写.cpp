// 类模板分文件编写.cpp
/*
问题：
类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
解决：
解决方式1：直接包含.cpp源文件
解决方式2：将声明和实现写到同一个文件中，并更改后缀名为.hpp，hpp是约定的名称，并不是强制
*/

#include<iostream>
// #include<string>


// using namespace std;

// // 类模板的分文件编写的问题以及解决

// template<class T1, class T2>
// class Person
// {
//     public:
//         Person(T1 name, T2 age);
//         void showPerson();
//         T1 m_Name;
//         T2 m_Age;
// };

// template<class T1, class T2>
// Person<T1, T2>::Person(T1 name, T2 age)
// {
//     this->m_Name = name;
//     this->m_Age = age;
// }

// template<class T1, class T2>
// void Person<T1, T2>::showPerson()
// {
//     cout << "Name is: " << this->m_Name << endl;
//     cout << "Age is: " << this->m_Age << endl;
// }


// 第一种解决方式，直接包含源文件
// #include "person.cpp"

// 第二种解决方式，将.h和.cpp中的内容写到一起，将后缀名改为.hpp文件
#include "person.hpp"

void test01()
{
    Person<string, int>p("Jerry", 18);
    p.showPerson();
}

int main()
{
    test01();
    return 0;
}