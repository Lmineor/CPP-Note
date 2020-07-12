/*
C++中，允许空指针调用成员函数
*/


#include <iostream>
#include <string>
using namespace std;


//类做友元

class Building;
class GoodGay
{
    public:
        GoodGay();
    public:
        void visit(); //参观函数  访问Building中的属性

        Building * building;
};


class Building
{
    friend class GoodGay; //类作为友元
    public:
        Building();
    public:
        string m_SittingRoom; // 客厅
    private:
        string m_BedRoom; // 卧室

};

// 类外写成员函数
Building:: Building()
{
    m_SittingRoom = "sitting room";
     m_BedRoom = "bed room";
}

GoodGay::GoodGay()
{
    //创建一个建筑物对象
    building = new Building;
}

void GoodGay::visit()
{
    cout << "Good gay is visiting " << building->m_SittingRoom <<endl;
    cout << "Good gay is visiting " << building->m_BedRoom <<endl;

}

// 1. 解决名称冲突
void test01(){
    GoodGay gg;
    gg.visit();
}

int main(){
    test01();
    return 0;
}