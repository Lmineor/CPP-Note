#include <iostream>
#include <string>

using namespace std;
struct Car
{
    string builder;
    int year;
};

int main(){
    int cars_num;
    cout << "How many cars do you wish to catalog:";
    cin >> cars_num;
    Car *car = new Car[cars_num];
    for (int i=0; i<cars_num; i++)
    {
        cout << "Car #" << i + 1 << ":\n";
        cout << "Please enter the make:";
        cin.ignore();// Skip the '\n' character left in the input buffer
        getline(cin, car[i].builder);
        cout << "Please enter the year made:";
        cin >> car[i].year;
    }
    cout << "Here is your collection:" << endl;
    for (int i = 0; i < cars_num; i++)
    {
        cout << car[i].year << " " << car[i].builder << endl;
    }
    return 0;
}