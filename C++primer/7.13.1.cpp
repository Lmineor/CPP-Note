# include <iostream>

float tiaohe_avg(float &num1, float &num2);

int main()
{
    using namespace std;
    float num1;
    float num2;
    cout << "Input a num:";
    cin >> num1;
    cout << "Input another num:";
    cin >> num2;
    while (num1 != 0 && num2 != 0)
    {
        float res;
        res = tiaohe_avg(num1, num2);
        cout <<"tiaohe is:" << res << endl;
        cout << "Input a num:";
        cin >> num1;
        cout << "Input another num:";
        cin >> num2;
    }
}

float tiaohe_avg(float &num1, float &num2)
{
    return 2.0 * num1 *  num2/(num1 + num2);
}