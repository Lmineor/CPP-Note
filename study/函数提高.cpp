#include <iostream>
using namespace  std;

// 函数默认参数=================================================
// 1. 如果某个位置有默认参数值，这个位置后都必须有默认参数
int func(int a, int b = 20, int c = 30)
{
    return a + b + c;
}

// 2. 如果函数声明有默认参数，函数实现就不能用默认参数,反之亦然
int func2(int a= 10, int b = 20);
int func2(int a, int b){
    return a + b;
}
// 函数默认参数=================================================

// 函数占位参数=================================================
// 占位参数目前还用不到
// 展位参数还可以有默认参数
 // void zhanwei(int a, int 10)
void zhanwei(int a, int)
{   
    //目前的后面的int还用不到
    cout << "this is func "<< endl;
}

// 函数占位参数=================================================

// 函数重载 = ===================================
// 提高函数可用性
/*
满足重载的条件：
1. 同一个作用域下
2. 函数名称相同
3. 函数参数类型不同或者个数不同或者顺序不同
 注意：函数的返回值不可以作为函数重载的条件

坑：
 - 引用作为函数重载条件
 - 函数重载碰到函数默认参数
*/
void chongzai(){
    cout << "func call" << endl;
}
void chongzai(int a){
    cout << "func call: "<< a << endl;
}

void chongzai(double a){
    cout << "func call: "<< a << endl;
}

void chongzai(double a, int b){
    cout << "func int: "<< a << endl;
    cout << "func double: "<< b << endl;
}

// 注意：函数的返回值不可以作为函数重载的条件
// int chongzai(double a, int b){
//     cout << "func int: "<< a << endl;
//     cout << "func double: "<< b << endl;
// }
// 函数重载 = ===================================

// 函数重载的坑 = ===================================
// 引用作为重载的条件
void keng1(int &a){ // int &a = 10;不合法，不会走这个
    cout << "keng1 call:" <<endl;
}
void keng1(const int &a){
    cout << "keng1 const call:" <<endl;
}

//默认参数
void keng2(int a){
    cout << "keng 2 call" << endl;
}
void keng2(int a, int b = 10){
    cout << "keng 2 call int b" << endl;
}
// 函数重载的坑 = ===================================
int main(){
    cout << func(10,40) << endl;
    func2(10, 20);
    zhanwei(20, 20); // 占位参数必须填补

    /// 函数重载
    chongzai();
    chongzai(10);
    chongzai(10.1);
    chongzai(10.1,  10);

    // 坑
    //引用
    int a  =10;
    // keng1(a);// int &a = 10;不合法，不会走第一个
    keng1(10); // 走第二个

    // 默认参数
    keng2(20);

    return 0;
}