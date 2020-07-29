// 模板的局限性.cpp
/*
模板不是万能的， 有些特定数据类型，需要具体化方式来做特殊实现
总结：
利用具体化的模板，可以解决自定义类型的通用化
学习模板并不是为了写模板，而是在STL中能够运用系统提供的模板
*/

#include<iostream>
#include<string>
using namespace std;

//模板的局限性


class Person
{
    public:
        Person(string name, int age)
        {
            this->m_Name = name;
            this->m_Age = age;
        }
        string m_Name; //  姓名
        int m_Age; //年龄

};

// 对比两个数据是否相等的函数
template<class T>
bool myCompare(T &a, T &b)
{
    return a == b;
}


// 利用具体化Person的版本实现代码，具体化优先调用
template<> bool myCompare(Person &p1, Person &p2)
{
    if(p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age){
        return true;
    }
    else
    {
        return false;
    }
}

void test01()
{
    int a = 10;
    int b = 20;
    bool ret = myCompare(a, b);
    if(ret){
        cout << " a = b" << endl;
    }else{ 
        cout << "a != b" << endl;
    }
}


void test02()
{
    Person p1("Tom", 10);
    Person p2("Tom", 10);
    bool ret = myCompare(p1, p2);
    if(ret){
        cout << " a = b" << endl;
    }else{ 
        cout << "a != b" << endl;
    }
}


int main()
{
    test01();
    test02();
    return 0;
}