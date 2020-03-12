#include <iostream>
#include "stock00.h"

void Stock::acquire(const std::string &co, long n, double pr)
{
    company = co;
    if(n<0)
    {
        std::cout<<"Number of shares can't be negative;"<<company << "share set to 0"<<std::endl;
        shares = 0;
    }
    else
    {
        shares = n;
    }
    shares_val = pr;
    set_tot();
}

void Stock::buy(long num, double price)
{
    if(num<0)
    {
        std::cout<<"Number of shares pruchased can't be negative;"<< "交易失败"<<std::endl;
    }
    else
    {
        shares += num;
        shares_val = price;
        set_tot();
    }
}


void Stock::sell(long num, double price)
{
    if(num<0)
    {
        std::cout<<"Number of shares can't be negative;" << "交易失败"<<std::endl;
    }
    else if(num>shares)
    {
        std::cout<<"没有这么多的股份;"<< "交易失败"<<std::endl;
        shares = 0;
    }
    else
    {
        shares -= num;
        shares_val = price;
        set_tot();
    }
    
}


void Stock::update(double price)
{
    shares_val = price;
    set_tot();
}


void Stock::show()
{
    std::cout << "Company:"<<company
            <<"Share:"<<shares<<'\n'
            <<"Share Price:$"<<shares_val
            <<"Total Worth:$"<<total_val<<std::endl;
}