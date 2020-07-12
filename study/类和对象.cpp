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


成员属性为私有
1. 可以自己控制读写权限
2. 对于写可以检测数据的有效性

*/

#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
    // 设置姓名
    void setName(string name){
        m_Name = name;
    };
    string getName(){
        return m_Name;
    };

    int getAge(){
        return m_Age;
    }

    void setLover(string lover){
        m_Lover = lover;
    }
private:
    // 姓名 可读可写
    string m_Name;

    // 年龄 只读
    int m_Age=10;

    // 情人 只写
    string m_Lover;
};


int main(){
    Person p;
    p.setName("zhang");
    cout << "name is: " << p.getName() << " age: " << p.getAge()<< endl;
    p.setLover("xiaoming");
    
    return 0;
}