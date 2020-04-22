#include<iostream>

const int  Feet2Inch = 12;         //1英尺等于12英寸

int main(){
    using namespace std;
    int user_inch;
    int height_feet;
    int height_inch;
    cout << "Input your height(inches):__\b\b";
    cin >> user_inch;
    height_feet = user_inch / Feet2Inch;
    height_inch = user_inch % Feet2Inch;
    cout << "Your height is " << height_feet << " feet " << height_inch << " inches";
    return 0;
}