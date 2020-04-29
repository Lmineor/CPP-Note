//编写一个程序，它打开一个文件，逐个字符地读取该文件，直到到达文件末尾，然后指出该文件中包含多少个字符
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    using namespace std;
    
    string filename = "6.11.8.txt";
    ifstream inFile; // object for handling file input
    inFile.open(filename); // associate inFile with a file
    if(!inFile.is_open())
    {
        cout << "Could not open the file" << filename << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    char value;
    int count = 0;
    inFile >> value;
    while(inFile.good()) // while input good and not at EOF
    {
        ++count;
        inFile >> value;
    }
    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";
    if(count == 0)
        cout << "No data processed.\n";
    else
    {
        cout << "Items read: " << count << endl;
    }
    inFile.close();
    return 0;
}