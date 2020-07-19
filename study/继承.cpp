/*
继承是面向对象三大特性之一
好处：减少重复代码
语法: class 子类 : 继承方式 父类
子类 也成为派生类
父类 也成为基类
子类中的成员包含两大部分
1. 从基类继承过来的
2. 自己增加的成员
从基类继承过来的表现其共性，而新增的成员体现了其个性

继承方式：
1. 公共继承
2. 保护继承
3. 私有继承
*/

#include <iostream>

using namespace std;


// 公共页面
class BasePage
{
    public:
        void header()
        {
            cout << "main,open,register ....(common header)\n";
        }
        void footer()
        {
            cout << "help center, information\n";
        }
        void left()
        {
            cout << "left part java python c++\n";
        }
};

//Python页面
class Python : public BasePage
{
    public:
        void content()
        {
            cout << "Python Content\n";
        }
};


//Java页面
class Java : public BasePage
{
    public:
        void content()
        {
            cout << "Java Content\n";
        }
};
//C++页面
class CPP : public BasePage
{
    public:
        void content()
        {
            cout << "CPP Content\n";
        }
}; 

void test01()
{
    cout << "Java\n";
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
}

int main()
{
    test01();
    return 0;
}