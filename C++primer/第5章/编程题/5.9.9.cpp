#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string word;
    int count = 0;
    cout << "Enter words(to stop, type the world done): ";
    cin >> word;
    while (word != "done")
    {
        count += 1;
    }
    cout << "You entered a total of " << count << " words"; 
}