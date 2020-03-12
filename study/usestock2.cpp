#include <iostream>
#include "stock10.h"

int main()
{
    {
        using std::cout;
        cout<<"use con to create new obj\n";
        Stock stock1("NanoSmart", 12, 20.0); //构造器方法一
        stock1.show();
        Stock stock2 = Stock("Boffo Objects", 2, 2.0); //构造器方法二
        stock2.show();

        cout<<"将2赋值给1\n";
        stock2 = stock1;
        cout<<"列出stock1和stock2\n";
        stock1.show();
        stock2.show();
        
        cout<<"使用构造器重置一个对象\n";
        stock1 = Stock("Nify Foods", 10, 50.0);
        cout<<"重置的stock1为:\n";
        stock1.show();
        cout<<"Done\n";
    }
    return 0;
}



/*
头文件:stock10.h
源代码文件:stock10.cpp
主函数文件:usestock.cpp
用的编译命令是这个：
cd "e:\Coding\C++\learning\study\" && g++ usestock2.cpp -o usestock2 && "e:\Coding\C++\learning\study\"usestock2
然后提示我没有定义引用
*/