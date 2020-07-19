/*
纯虚函数
语法： virtual 返回值类型 函数名 （参数列表） = 0；
当类中有了纯虚函数，这个类也成为抽象类

抽象类的特点：
1. 无法实例化对象
2. 子类必须重写抽象类中的纯虚函数，否则也属于抽象类
*/

#include <iostream>

using namespace std;

class Base
{
    public:
        // 纯虚函数
        //类中有了纯虚函数，这个类也成为抽象类,无法实例化对象
        virtual void func() = 0;
};


class Son: public Base
{
    public:
        virtual void func(){
            cout << "func" << endl;
        };
};

void test01()
{
    Base * base = new Son;
    base->func();
};


int main()
{
    test01();
    return 0;
}