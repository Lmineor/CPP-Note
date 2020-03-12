#include <iostream>
#include "stock20.h"


Stock::Stock()
{
    std::cout<<"call defult constructor"<<std::endl;
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}


Stock::Stock(const std::string &co, long n, double pr)
{
    std::cout<<"use cons"<<co<<"\n";
    company = co;
    if(n<0)
    {
        std::cout<<"Number of shares can't be negative;"<<company << "share set to 0."<<std::endl;
        shares = 0;
    }
    else shares = n;
    share_val = pr;
    set_tot();
}


Stock::~Stock()
{
    std::cout<<"Bye."<<company<<"!\n";
}


void Stock::buy(long num, double price)
{
    if(num<0)
    {
        std::cout<<"Number of shares pruchased can't be negative;"<< "fail"<<std::endl;
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}


void Stock::sell(long num, double price)
{
    if(num<0)
    {
        std::cout<<"Number of shares can't be negative;" << "fail"<<std::endl;
    }
    else if(num>shares)
    {
        std::cout<<"no money;"<< "fail"<<std::endl;
        shares = 0;
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
    
}


void Stock::update(double price)
{
    share_val = price;
    set_tot();
}


void Stock::show()
{
    std::cout << "Company:"<<company
            <<"Share:"<<shares<<'\n'
            <<"Share Price:$"<<share_val
            <<"Total Worth:$"<<total_val<<std::endl;
}


const Stock & Stock::topval(const Stock & s) const
{
    if(s.total_val > total_val) return s;
    else return *this;
}