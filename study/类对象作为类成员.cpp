/*
类对象作为类成员
先构造类成员的对象，再构造自身
先析构自身，再析构类成员的对象
*/


#include <iostream>
#include <string>
using namespace std;

class Phone
{
public:
    string m_PName;
    Phone (string pName){
        m_PName = pName;
    }
};

class Person
{
public:
    string m_Name;
    Phone m_Phone;

    // Phone m_Phone = pName; // 隐式转换法
    Person(string name, string pName):m_Name(name), m_Phone(pName){

    }
    // int m_C;
    // Person(){
    //     cout << "Person default constructor" << endl;
    // }
    // ~Person(){
    //     cout << "Person default deconstructor" << endl;
    // }
};

void test01(){
    Person p("zhangsan", "apple");
    cout << p.m_Name << " ffff " << p.m_Phone.m_PName <<endl;
}

int main(){
    test01();
    return 0;
}