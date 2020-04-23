#include <iostream>
#include <string>


using namespace std;

int main()
{
    struct CandyBar
    {
        string brand;
        float weight;
        int calory;
    };
    
    CandyBar snack[3];
    snack[0] = {
        "Mocha Munch",
        2.3,
        350
    };
    snack[1] = {
        "Mcha Munch",
        2.4,
        3250
    };
    snack[2] = {
        "Mcha Much",
        2.4,
        50
    };
    for(int i =0; i< 3; i++)
    {
        cout << "brand: " << snack[i].brand << " weight: " << snack[i].weight << " cal: " << snack[i].calory << endl;
    }
}