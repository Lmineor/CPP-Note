#ifndef STOCK_20_H
#define STOCK_20_H

#include <string>

class Stock
{
    private:
        std::string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot(){total_val = shares * share_val;}
    public:
    //两个构造器
        Stock(); //默认构造函数  构造器方法一
        Stock(const std::string &co, long n=0, double pr=0.0); //构造器方法二
        ~Stock(); //析构函数
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show() const;
        const Stock & topval(const Stock &s) const;
};

#endif
