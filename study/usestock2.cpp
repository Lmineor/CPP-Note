#include <iostream>
#include "stock20.h"

const int STKS = 4;

int main()
{
    //类的构造函数使用
    // {
    //     using std::cout;
    //     cout<<"use con to create new obj\n";
    //     Stock stock1("NanoSmart", 12, 20.0); //构造器方法一
    //     stock1.show();
    //     Stock stock2 = Stock("Boffo Objects", 2, 2.0); //构造器方法二
    //     stock2.show();

    //     cout<<"将2赋值给1\n";
    //     stock2 = stock1;
    //     cout<<"列出stock1和stock2\n";
    //     stock1.show();
    //     stock2.show();
        
    //     cout<<"使用构造器重置一个对象\n";
    //     stock1 = Stock("Nify Foods", 10, 50.0);
    //     cout<<"重置的stock1为:\n";
    //     stock1.show();
    //     cout<<"Done\n";
    // }
    // return 0;

    //对象数组使用
    Stock stocks[STKS] = {
        Stock("NanoSmart", 12, 20.0),
        Stock("Boffo Objects", 200, 2.0),
        Stock("Monolithic Oblisks", 130, 3.25),
        Stock("Fleep Ent", 60, 6.5)
    };
    std::cout <<"Stock holdings:\n";
    int st;
    for(st=0;st<STKS; st++) stocks[st].show();

    //给第一个元素设置指针
    const Stock* top = &stocks[0];
    for(st = 1; st<STKS;st++) top = &top->topval(stocks[st]);

    //now top points to the most valuable holding
    std::cout<< "\nMost valuable holding:\n";
    top->show();
    return 0;
}
