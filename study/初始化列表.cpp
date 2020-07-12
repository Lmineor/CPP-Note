/*
C++提供了初始化列表语法，用来初始化属性
语法: 构造函数():属性1(值1),属性2(值2),属性3(值3)...{}
*/


#include <iostream>
using namespace std;

class Person
{
public:
    int m_A;
    int m_B;
    int m_C;

    //传统初始化操作
    // Person(int a, int b, int c){
    //     cout << "Person param constructor" << endl;
    //     m_A = a;
    //     m_B = b;
    //     m_C = c;
    // }
    // 初始化列表方式
    Person(int a, int b, int c):m_A(a), m_B(b),m_C(c){

    }


    ~Person(){
        cout << "Person default deconstructor" << endl;
    }
};

void test01(){
    Person p1(18, 180, 30);
    // Person p1;
    cout << "m_A = " << p1.m_A << endl;
    cout << "m_B = " << p1.m_B << endl;
    cout << "m_C = " << p1.m_C << endl;
}

int main(){
    test01();
    return 0;
}