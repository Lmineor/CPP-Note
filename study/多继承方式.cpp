/*
两个派生类继承同一个基类
又有某个类同时继承两个派生类
这种继承称为菱形继承，或者钻石继承，导致属性出现多份，浪费空间

利用虚继承 解决问题
在继承之前加上virtual变为虚继承， Animal类称为 虚基类

*/

#include <iostream>

using namespace std;


class Animal
{
    public:
        int m_Age;
};

class Sheep: virtual public Animal{}; //在继承前加 virtual关键词 变为虚基类


class Tuo: virtual public Animal{};

class SheepTuo : public Sheep, public Tuo{};  // 产生菱形继承



void test01()
{
    SheepTuo st;
    st.Sheep::m_Age = 18;
    st.Tuo::m_Age = 28;
    cout << st.Sheep::m_Age << endl;
    cout << st.Tuo::m_Age << endl;
    cout << st.m_Age << endl;
}
int main()
{
    test01();
    return 0;
}