#include <iostream>

int main()
{
    using namespace std;
    int degrees, minutes, seconds;
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    float fin_degrees;
    fin_degrees = float(degrees) + minutes / 60.0 + seconds / 3600.0;
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds " << "= " << fin_degrees << " degrees"<<endl;
    return 1;
}

/*
Enter a latitude in degrees, minutes, and seconds:
First, enter the degrees: 37
Next, enter the minutes of arc: 51
Finally, enter the seconds of arc: 19
37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/