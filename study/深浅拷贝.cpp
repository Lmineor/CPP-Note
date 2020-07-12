/*
经典问题
浅拷贝： 简单的赋值拷贝操作  
问题： 堆区内存重复释放
解决： 利用深拷贝
深拷贝：在堆区重新申请空间，进行拷贝操作

总结：如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
*/


#include <iostream>
using namespace std;

class Person
{
public:
    int m_Age;
    int *m_Height;
    Person(){
        cout << "Person default constructor" << endl;
    }

    Person(int age, int height){
        cout << "Person param constructor" << endl;
        m_Height =  new int(height);
        m_Age = age;
    }


    // 自己是实现拷贝构造函数，解决浅拷贝带来的问题

    Person(const Person &p){
        cout << "Person copy constructor" << endl;
        m_Age = p.m_Age;
        //m_Height = p.m_Height; // 编译器默认实现的方法,浅拷贝
        // 深拷贝
        m_Height =new int(*p.m_Height);
    }

    ~Person(){
        // 析构代码，释放堆区开辟的数据
        if (m_Height != NULL){
            delete m_Height;
            m_Height = NULL;
        }
        cout << "Person default deconstructor" << endl;
    }
};

void test01(){
    Person p1(18, 180);
    cout << "Age: " << p1.m_Age << " Height: " << *p1.m_Height <<endl;

    Person p2(p1);
    cout <<  "Age: " << p2.m_Age<< " Height: " << *p2.m_Height << endl;
}

int main(){
    test01();
    return 0;
}