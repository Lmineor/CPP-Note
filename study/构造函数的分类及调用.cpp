#include<iostream>
using namespace std;


class Person
{
private:
    
public:
    //构造函数
    int age;
    Person(){cout << "wu can shu\n";}
    Person(int a){
        age = a;
        cout << "you can shu\n";
    }

    //拷贝构造函数
    Person(const Person &p){
        cout << "kao bei\n";
        age = p.age;
    }
    ~Person(){ }
};

//调用
void test01(){
    // 1. 括号法
    // Person p;           // 默认构造函数调用
    // Person p2(10);      // 有参构造函数
    // Person p3(p2);      // 拷贝
    //注意1：
    // 调用默认构造函数时，不要加()
    // 因为Person p1();会被编译器认为是一个函数声明


    // 2. 显式法
    Person p1;
    Person p2 = Person(10); // 有参  
    // Person(10) //匿名对象 特点： 当前行执行结束后，系统会理机回收匿名对象
    Person p3 = Person(p2);
    //注意2：
    // 不用利用拷贝构造函数 初始化匿名对象  Person(p3) 编译器会认为Person(p3) === Person p3;
    // 3. 隐式转换法
    Person p4 = 10; //相当于 Person p4 = Person(10) 有参构造
    Person p5 = p4; // 拷贝构造
}

int main(){
    test01();
    return 0;
}