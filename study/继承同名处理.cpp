/*
出现同名
- 访问子类同名成员 直接访问即可
- 访问父类同名成员 加作用域s.Base::m_A
*/

#include <iostream>
using namespace std;


class Base
{
    public:
        Base()
        {
            m_A = 100;
        };
        int m_A;
        void func()
        {
            cout << "Base - func() call\n";
        }

        void func(int a)
        {
            cout << "Base - func( a) call\n";
        }
};

class Son: public Base
{
    public:
        Son()
        {
            m_A = 200;
        };
        void func()
        {
            cout << "son\n";
        }
        
        int m_A;
};

void test01()
{
    Son s;
    cout << "m_A = " << s.m_A << endl;

    //如果通过子类对象 访问到父类中同名成员 ，需要加作用域
    cout << "m_A = " <<s.Base::m_A << endl;
}

void test02()
{
    Son s;
    s.func(); // 直接调用 是子类中的同名成员
    
    //如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏父类中所有同名成员函数
    // s.func(100);
    // 加作用域即可


    s.Base::func(); // 调用父类的成员函数
    s.Base::func(100); // 调用父类的成员函数
}

int main()
{
    // test01();
    test02();
    return 0;
}