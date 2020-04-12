# include <iostream>

int main()
{
    using namespace std;
    int smaller, bigger;
    cout<<"input a num:";
    cin >> smaller;
    cout<<"input another num:";
    cin >> bigger;
    int temp, res = 0;
    if (smaller > bigger)
    {
        temp = smaller;
        smaller = bigger;
        bigger = temp;
    }
    for (int i=smaller;i<=bigger;i++)
    {
        res += i;
    }
    cout<<"sum is "<<res<<endl;
    return 0;
}