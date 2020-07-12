// 面向对象的三大特征： 封装、继承、堕胎
// C++认为一切皆对象，对象上有其属性和行为
/*
封装的意义：
1. 将属性和行为作为一个整体，表现生活中的事物
2. 将属性和行为加以权限控制
意义1：
在设计类的时候，属性和行为写在一起，表现事物
语法：class 类名 {访问权限：属性 / 行为};
意义2：
控制不同的访问权限
1. public 公共权限          成员类内可以访问    类外可以访问
2. protected 保护权限       成员类内可以访问    类外不可以访问
3. private 私有权限         成员类内可以访问    类外不可以访问

struct 和class区别:
唯一区别：默认的访问权限不同
struct: 默认权限为公共
class:默认权限为私有

*/

#include<iostream>
#include<string>

using namespace std;

// 设计一{个圆类，求圆的周长

const double PI = 3.14;
class Circle
{
    // 访问权限
    //公共权限
public:
    //属性
    // 半径
    int m_r;

    //行为
    //获取圆的周长
    double claculateZC()
    {
        return 2 * PI * m_r;
    }
};

class Student{
public:
    //类中的属性和行为，统一称为成员
    // 属性 成员属性 成员变量
    // 行为 成员函数 成员方法


    // 属性
    string s_name;
    int s_id;

    //行为
    void showStudent()
    {
        cout << "name: " << s_name << endl;
        cout << "id: "<< s_id << endl;
    }

    void setName(string name){
        s_name = name;
    }
};



class Person{
public:
    string m_Name;
protected:
    string m_Car;

private:
    int m_Password;

public:
    void func()
    {
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Password = 123456;
    };
};


// class 和struct的区别===========

class C1{
    int m_A; // 默认权限，私有
};
struct C2{
    int m_A; //默认权限，公有
};

// class 和struct的区别===========
int main(){

    // 创建对象
    //实例化(通过一个类，创建一个对象的过程)
    Circle c1;
    c1.m_r  =10;
    cout << "zhouchang is: " << c1.claculateZC()<< endl;

    Student s1;
    s1.s_name = "xiaoming";
    s1.s_id = 111;
    s1.showStudent();
    Student s2;
    s2.setName("xiaoming");
    s2.s_id = 10;
    s2.showStudent();

    Person p1;
    p1.m_Name = "里斯";
    // p1.m_Car = "奔驰"; // 保护权限，不能访问
    // p1.m_Password = 1232; // 私有/权限，不能访问

    // class 和struct的区别===========
    C1 c1;
    // c1.m_A = 100; // 错误 私有
    C2 c2;
    c2.m_A = 100; // 正确 公共
    return 0;
}