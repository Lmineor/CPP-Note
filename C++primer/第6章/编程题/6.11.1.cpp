#include<iostream>
#include<cctype>


int main()
{
    using namespace std;
    char ch;
    cin.get(ch);
    while (ch != '@')
    {
        if (islower(ch))   //若是小写
        {
            ch = toupper(ch);
            cout<<ch << endl;
        }
        else if(isupper(ch))
        {
            ch = tolower(ch);
            cout<<ch << endl;
        }
        cin.get(ch);
    }
}


