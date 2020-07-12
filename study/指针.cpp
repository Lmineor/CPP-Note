#include <iostream>
#include<string>

using namespace std;

int * func(){
    int *p = new int (10);
    return p;
}

int main(){
    // 创建局部变量
    int * p = func();
    cout << *p;

}
/*
内存分区模型
1. 代码区： 存放函数的二进制代码，由操作系统进行管辖
2. 全局区： 存放全局变量和静态变量以及常量
常量区中存放const修饰的全局变量和字符串常量
3. 栈区：由编译器自动分配释放，存放函数的参数值（形参）、局部变量等，函数执行后自动释放
4. 堆区：由程序员分配和释放，若程序员不是放，程序结束时由操作系统回收

内存四区的意义：
不同区域存放的数据，赋予不同的生命周期，给我们更大的灵活编程
1.1 程序运行前
代码区：
存放cpu执行的机器指令
代码区是共享的，
代码区是只读的，
全局区：
该区域的数据在程序结束后由操作系统释放
1.2 程序运行后
注意：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
栈区：
pass
堆区：
c++中主要利用new在堆区开辟内存
指针本质也是局部变量，放在栈上，指针保存的数据是放在堆区的
*/