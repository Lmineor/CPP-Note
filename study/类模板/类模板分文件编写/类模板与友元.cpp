// <!-- 类模板与友元.md -->
/*
全局函数类内实现-直接在类内声明友元即可
全局函数类外实现-需要提前让编译器知道全局函数的存在

总结： 建议全局函数做类内实现，用法简单，而且编译器可以直接识别
*/
#include<iostream>
#include<string>

using namespace std;

template<class T1, class T2>
class Person;

//类外实现
template<class T1, class T2>
void printPerson2(Person<T1, T2> p)
{
    cout <<"Name is: " <<p.m_Age << endl;
    cout << "Age is: " << p.m_Name << endl;
}


// 通过全局函数 打印person信息


template<class T1, class T2>
class Person
{
    //全局函数 类内实现
    friend void printPerson(Person<T1, T2>p)
    {
        cout <<"Name is: " <<p.m_Age << endl;
        cout << "Age is: " << p.m_Name << endl;
    }

    //全局函数 类外实现
    // 加空模板参数列表
    // 如果全局函数 是类外实现，需要让编译器提前知道这个函数的存在
    friend void printPerson2<>(Person<T1, T2>p);


    public:
        Person(T1 name, T2 age)
        {
            this->m_Age = age;
            this->m_Name = name;
        }

    private:
        T1 m_Name;
        T2 m_Age;

};



// 1 全局函数在类内实现
void test01()
{
    Person<string, int>p("Tom", 20);
    printPerson(p);
}

// 2 全局函数在类外实现
void test02()
{
    Person<string, int>p("Jerry", 20);
    printPerson2(p);
}

int main()
{
    // test01();
    test02();
    return 0;
}