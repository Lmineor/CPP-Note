// 6.11.9.cpp
#include "6.11.9.h"


void show_don(donater * don, const int num);

int main()
{

    // TODO: debug
    string filename = "6.11.9.txt";
    ifstream inFile;
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    int donater_num; // num to ini
    string name;
    int money;
    inFile >> donater_num; // donators num
    donater *don = new donater [donater_num];
    string buffer[10];
    int index = 0;
    while (inFile.good())
    {
        getline(inFile, buffer[index]);
        index++;
    }
    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";
    inFile.close();
    for(int i = 0; i < donater_num; i++)
    {
        don[i].name = buffer[i*2];
        cout << don[i].name << endl;
        don[i].money = atoi(buffer[i*2 + 1].c_str());
        cout << don[i].money << endl;
    }
    show_don(don, donater_num);
    delete [] don;
    return 0;
}


void show_don(donater * don, const int nums)
{
    for (int i=0; i < nums; i++)
    {
        cout << don[i].money << endl;
        cout << don[i].name << endl;
    }
}