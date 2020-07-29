// 模板.cpp
/*
c++另一种编程思想称为泛型编程，主要利用的技术就是模板
C++提供两种模板机制  函数模板和类模板

函数模板语法：
函数模板作用：
建立一个通用函数，其函数返回值类型和形参类型可以不具体指定，用一个虚拟的类型来代表
语法：
template<typename T>
template ---声明创建模板
typename（class） -- 表明其后面的符号是一种数据类型，可以用class代替
T----通用的数据类型，名称可以替换，通常为大写字母

模板的目的是为了提高复用性，将类型参数化

注意事项：
- 自动类型推导，必须推导出一致的数据类型T才可以使用
- 模板必须要确定出T的数据类型，才可以使用

普通函数与函数模板的区别：
- 普通函数调用时可以发生自动类型转换（隐式类型转换）
- 函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
- 如果利用显示指定类型的方式，可以发生隐式类型转换


普通函数与函数模板的调用规则
1 如果函数模板和不同函数都可以实现，优先调用普通函数
2 可以通过空模板参数列表来强制调用函数模板
3 函数模板也可以发生重载
4 如果函数模板可以产生更好的匹配优先调用函数模板
*/

#include<iostream>

using namespace std;

// 两个整型缓缓函数
void swapInt(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapDouble(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}


// 函数模板
template<typename T> // 声明一个模板，高速编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    //两种方式使用利用函数模板交换
    // 1. 自动类型推导
    // mySwap(a, b); 
    // 1. 显式指定类型
    mySwap<int>(a, b);
    

    // swapInt(a, b);
    cout << a  << " " << b << endl;
    double c=  1.9;
    double d = 2.0;
    swapDouble(c, d);
    cout << c  << " " << d << endl;
    return 0;
}