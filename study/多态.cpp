/*
多态分为两类
1. 静态多态：函数重载和运算符重载属于静态多态，复用函数名
2. 动态多态：派生类和虚函数实现运行时多态

静态多态和动态多态区别：
静态多态的函数地址早绑定 - 编译阶段确定函数地址
动态多态的函数地址晚绑定 - 运行阶段确定函数地址

满足条件：
1. 有继承关系
2. 子类要重写父类的虚函数

使用：
父类的指针或者引用 指向子类对象

优点：
代码组织结构清晰
可读性强
利于前期和后期的扩展以及维护

在真实开发中 提倡开闭原则
开闭原则：多扩展进行开放，对修改进行关闭
*/

#include <iostream>
using namespace std;

class Animal
{
    public:
        // 虚函数
        virtual void speak()
        // void speak()
        {
            cout << "animal speak" <<endl;
        }
};

class Cat: public Animal
{
    public:
        //重写 函数返回值类型 函数名 参数列表  完全相同
        void speak() // 或者 virtual void speak()
        {
            cout << "small cat speak" << endl;
        }
};


class Dog: public Animal
{
    public:
        // 虚函数
        void speak()
        {
            cout << "small dog speak" << endl;
        }
};

//地址早绑定 在编译阶段确定了函数地址
//如果想执行让猫说话，那么函数地址不能提前绑定，需要在运行时确定
void doSpeak(Animal &animal) // Animal & animal = cat;
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);
    Dog dog;
    doSpeak(dog);
}

void test02()
{
    cout << "size of animal " << sizeof(Animal) << endl;
}

int main()
{
    // test01();
    test02();
    return 0;
}