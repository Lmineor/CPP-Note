#include <iostream>

using namespace std;

class AbstractDrinking
{
    public:
        //煮水
        virtual void Boil() = 0;

        //冲泡
        virtual void Brew() = 0;

        //导入杯中
        virtual void PourInCup() = 0;

        //加辅助佐料
        virtual void PutSomething() = 0;

        void makeDrink()
        {
            Boil();
            Brew();
            PourInCup();
            PutSomething();
        }
};

//制作咖啡
class Coffee : public AbstractDrinking
{
    public:
        //煮水
        virtual void Boil()
        {
            cout << "zhu kaungquanshui shui\n";
        };

        //冲泡
        virtual void Brew()
        {
            cout << "chong pao kafa shui\n";
        };

        //导入杯中
        virtual void PourInCup()
        {
            cout << "daoru beizhong\n";
        };

        //加辅助佐料
        virtual void PutSomething()
        {
            cout << "jia niu nai\n";
        };
};


//制茶
class Tea : public AbstractDrinking
{
    public:
        //煮水
        virtual void Boil()
        {
            cout << "zhu quanshui shui\n";
        };

        //冲泡
        virtual void Brew()
        {
            cout << "chong pao tea shui\n";
        };

        //导入杯中
        virtual void PourInCup()
        {
            cout << "daoru beizhong\n";
        };

        //加辅助佐料
        virtual void PutSomething()
        {
            cout << "jia ningmeng\n";
        };
};


void doWork(AbstractDrinking * abs) // AbstractDrinking * abs = new Coffee
{
    abs->makeDrink();
    delete abs;
};

void test01()
{
    doWork(new Coffee);
}
int main()
{
    test01();
    return 0;
}