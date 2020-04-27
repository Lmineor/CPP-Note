#include <iostream>
#include <string>


using namespace std;

struct donater
{
    string name;
    double money;
};


int main()
{
    int donaterNum;
    cout << "enter donater's num: ";
    cin >> donaterNum;
    donater *doa = new donater [donaterNum];    //使用new来创建动态数组
    for (int i=0; i< donaterNum; i++)
    {
        cout << "enter donater's name: ";
        getline(cin, doa[i].name);
        cout << "Enter donater's money: ";
        cin >> doa[i].money;
    }
    cout << "Below is Grand Patrons: \n";
    for(int i = 0; i < donaterNum; i++)
    {   
        if (doa[i].money > 10000)
        {
            cout << "Patrons: " << doa[i].name << "\t\t" << doa[i].money << endl;
        }
        else
        {
            cout << doa[i].name << "\t\t" << doa[i].money << endl;
        }
    }
    delete [] doa;
}