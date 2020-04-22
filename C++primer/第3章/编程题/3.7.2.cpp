#include <iostream>

const int Feet2Inch = 12;
const float Inch2M = 0.0254;
const float KG2Pounds = 2.2;

float height_m(int user_height_feet, int user_height_inch);
float weight_kg(int user_weight);



int main()
{
    using namespace std;
    int user_height_feet, user_height_inch, user_weight;
    cout << "Input your height(feet): ";
    cin >> user_height_feet;
    cout << endl;
    cout << "Now input your height(inches): ";
    cin >> user_height_inch;
    cout << endl;
    cout << "Not input your weight(pounds): ";
    cin >> user_weight;
    cout << endl;
    float h_m, w_kg;
    h_m = height_m(user_height_feet, user_height_inch);
    w_kg = weight_kg(user_weight);
    cout << "BMI is " << w_kg / (h_m * h_m) << endl;
}

float height_m(int user_height_feet, int user_height_inch)
{
    int total_inches;
    total_inches = user_height_feet * user_height_inch;
    return total_inches * Inch2M;
}

float weight_kg(int user_weight)
{
    return user_weight / KG2Pounds;
}

