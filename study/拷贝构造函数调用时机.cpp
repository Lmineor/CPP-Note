#include<iostream>
using namespace std;

/*
拷贝构造函数使用时机
1. 使用一个已经创建完毕的对象来初始化一个新对象
2. 值传递的方式给函数参数传值
3. 值方式返回局部对象
*/
class Person
{
private:
    
public:
    //构造函数
    int m_age;
    Person(){cout << "default\n";}
    Person(int a){
        m_age  = a;
        cout << "you can shu\n";
    }

    //拷贝构造函数
    Person(const Person &p){
        cout << "kao bei\n";
        m_age  = p.m_age;
    }
    ~Person(){ cout << "xi gou\n";}
};

//1. 使用一个已经创建完毕的对象来初始化一个新对象
void test01(){
    Person p1(20);
    Person p2(p1);

    cout << "p2 age: "<< p2.m_age << endl;
}

//2. 值传递的方式给函数参数传值
void doWork(Person p){

}
void test02(){
    Person p;
    doWork(p);
}


// 3. 值方式返回局部对象

Person doWork2(){
    Person p1;
    return p1;
}
void test03(){
    Person p = doWork2();
    cout << (int *)&p << endl;
}
int main(){
    // test01();
    // test02();
    test03();
    return 0;
}