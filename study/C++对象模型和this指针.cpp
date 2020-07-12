/*
C++中，类内的成员变量和成员函数分开存储
只有非静态成员变量才属于类的对象

每一个非静态成员函数只会诞生一份函数示例，也就是说多个同类型的对象会公用一块代码
问题？？：
这一块代码如何区分是哪个对象调用自己的
解决：this指针指向被调用的成员函数所属的对象
this指针概念：
this指针是隐含每一个非静态成员函数内的一种指针
this指针不需要定义，直接使用即可
用途:
- 当形参和成员变量同名时，可用this指针来区分
- 在类的非静态成员函数中返回对象本身，可使用return *this;
*/


#include <iostream>
#include <string>
using namespace std;



class Person
{
public:
    Person(int age)
    {   
        // this指针指向被调用的成员函数所属的对象
        this->age = age;
    }
    Person & PersonAddAge(Person &p){  // 如果用 Person PersonAddAge(Person &p) 涉及到构造拷贝函数
        this->age += p.age;
        return *this;
    }

    int age;
};


// 1. 解决名称冲突
void test01(){
    Person p(18);
    cout << "age " <<p.age << endl;

}
// 2. 返回对象本身用 *this
void test02(){
    Person p1(18);
    Person p2(18);

    // 链式编程思想
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout << "age " <<p2.age << endl;

}

int main(){
    // test01();
    test02();
    return 0;
}