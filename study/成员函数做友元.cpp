/*
C++中，允许空指针调用成员函数
*/


#include <iostream>
#include <string>
using namespace std;

class Building;
class GoodGay{
    public:
        GoodGay();
        void visit(); // 让visit函数可以访问building中私有成员
        void visit2(); //让visit函数不可以访问building中私有成员
        Building * building;
};
class Building
{   
    // 高速编译器， GoodGay类下的visit成员，作为本类的好朋友，可以访问私有成员
    friend void GoodGay::visit();
    public:
        Building();
public:
    string m_SittingRoom;
private:
    string m_BedRoom;

};


Building::Building(){
    m_SittingRoom = "keting";
    m_BedRoom = "woshi";
}


GoodGay::GoodGay(){
    building = new Building;
}
void GoodGay:: visit(){
    cout << "visit is visiting :"<< building->m_SittingRoom <<endl;
    cout << "visit is visiting :"<< building->m_BedRoom <<endl;
};
void GoodGay:: visit2(){
    cout << "visit is visiting :"<< building->m_SittingRoom <<endl;
    // cout << "visit is visiting :"<< building->m_BedRoom <<endl;
}; 


// 1. 解决名称冲突
void test01(){
    GoodGay gg;
    gg.visit();
    gg.visit2();
}

int main(){
    test01();
    return 0;
}