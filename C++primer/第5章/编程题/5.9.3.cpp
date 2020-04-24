# include <iostream>

int main()
{
    using namespace std;
    int num, res = 0;
    cout << "input a num:";
    cin >> num;
    while (num != 0)
    {
        res += num;
        cout<<"sum is "<< res <<endl;
        cout<<"input a num:";
        cin >> num;
    }
    cout << "End" << endl;
    return 0;
}