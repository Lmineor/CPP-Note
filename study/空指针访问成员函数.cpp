/*
C++中，允许空指针调用成员函数
*/


#include <iostream>
#include <string>
using namespace std;


//空指针调用成员函数
class Person
{
public:
    void showClassName(){
        cout << "this is Person class\n";
    }
    void showPersonAGe(){
        //报错的原因时因为传入的指针是NULL
        if(this == NULL){
            return;
        }
        cout << "age = " << m_Age << endl;
    }
    int m_Age;
};


// 1. 解决名称冲突
void test01(){
    Person *p = NULL;
    p->showClassName();

    p->showPersonAGe();

}

int main(){
    test01();
    return 0;
}