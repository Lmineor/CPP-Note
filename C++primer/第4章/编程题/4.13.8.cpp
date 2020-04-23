#include <iostream>
#include <string>


int main()
{
    using namespace std;
    struct Pizza
    {
        string brand;
        float dia;
        float weight;
    };
    Pizza *p = new Pizza;
    cout <<"brand:";
    getline(cin, p->brand);
    cout << "dia: "; 
    cin >> p->dia;
    cout << "weight: ";
    cin >> p->weight;
    cout <<"brand:" << p->brand << " dia: " << p->dia <<" weight: " << p->weight;
    delete p;
}