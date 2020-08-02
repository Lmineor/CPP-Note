// 类模板案例数组类封装.cpp

# include<string>
#include"MyArray.hpp"

using namespace std;

void printIntArray(MyArray <int> & arr)
{
    for(int i=0; i <arr.getSize();i++)
    {
        cout << arr[i] << endl;
    }
}

void test01()
{
    MyArray <int> arr1(5);

    for (int i=0; i<5; i++)
    {
        //利用尾插法向数组中插入数据
        arr1.Push_Back(i);
    }
    cout << "arr1 print " <<endl ;
    printIntArray(arr1);
    cout << "arr1 cap is: " << arr1.getCapacity() << endl;
    cout << "arr1 size is: " << arr1.getSize() << endl;

    MyArray <int> arr2(arr1); // 拷贝构造
    printIntArray(arr2);

    //尾删
    arr2.Pop_Back();
    cout << "arr2 cap is: " << arr2.getCapacity() << endl;
    cout << "arr2 size is: " << arr2.getSize() << endl;
    // MyArray <int> arr3(100);
    // arr3 = arr1;
}

//测试自定义数据类型
class Person
{
    public:
        Person(){}
        Person(string name, int age)
        {
            this->m_Age = age;
            this->m_Name = name;
        }
        string m_Name;
        int m_Age;
};

void printPersonArray(MyArray<Person> &arr)
{
    for(int i=0; i <arr.getSize();i++)
    {
        cout <<"Name is: "<< arr[i].m_Name <<" Age is: " << arr[i].m_Age << endl;
    }
}

void test02()
{
    MyArray<Person> arr(10);
    Person p1("wukong", 999);
    Person p2("hanxin", 21);
    Person p3("daji", 22);
    Person p4("zhaoyun", 23);
    Person p5("anqila", 24);
    //将数据插入到数组中
    arr.Push_Back(p1);
    arr.Push_Back(p2);
    arr.Push_Back(p3);
    arr.Push_Back(p4);
    arr.Push_Back(p5);
    //打印数组
    printPersonArray(arr);

    cout << "arr cap is: " << arr.getCapacity() << endl;
    cout << "arr size is: " << arr.getSize() << endl;
}


int main()
{
    // test01();
    test02();
    return 0;
}