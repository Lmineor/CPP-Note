#include <iostream>

using namespace std;
const int BASE = 100;

int main()
{
    int cleo_base_money = 100;
    int daphne_base_money = 100;
    int cleo_money = 100;
    int daphne_money = 100;
    int i = 1;
    for (i; cleo_money <= daphne_money;i++)
    {
        cleo_money = cleo_base_money*(1+0.05);
        daphne_money = 100 + 100*0.1*i;
        cleo_base_money = cleo_money;
        daphne_base_money = daphne_money;
    }
    cout << "After " << i << " years" << endl;
    cout << "cleo_money is : " << cleo_money << endl;
    cout << "daphne_money is : " << daphne_money << endl;

}