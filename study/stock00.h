//stock00.h -- Stock class interface
//version 00
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

class Stock // 声明类
{
    private:
        std::string company;
        long shares;
        double shares_val;
        double total_val;
        void set_tot() {total_val = shares * shares_val;};
    public:
        void acquire(const std::string &co, long n, double pr);
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show();
};
#endif
