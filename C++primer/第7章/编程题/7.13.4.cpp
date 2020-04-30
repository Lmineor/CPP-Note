#include<iostream>
long double probability();
int main()
{
    using namespace std;
    cout << "Probability is " << probability() << endl;
    cout << "Bye\n";
    return 0;
}


// the following function calculates the probabilitu f picking picks
// numberes correctly from numbers choices
long double probability()
{
    long double probability_in_fild_number = 1.0 * 5 * 4 * 3 * 2 * 1 / (47 * 46 * 45 * 44 * 43);
    long double probability_in_special_number = 1.0 / 27;
    return probability_in_fild_number * probability_in_special_number;
}