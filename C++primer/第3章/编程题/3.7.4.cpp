#include <iostream>

int main()
{
    using namespace std;
    long seconds;
    cout << "Enter the number of seconds:";
    cin >> seconds;
    int days, hours, minutes, rem_seconds;
    days = seconds / (60 * 60* 24);
    rem_seconds = seconds - days * (60 * 60 * 24);

    hours = rem_seconds / (60 * 60);
    rem_seconds = rem_seconds - hours * (60 * 60);

    minutes = rem_seconds / 60;
    rem_seconds = rem_seconds - minutes * 60;

    cout << seconds << " seconds " << "= " << days << " days, " << hours << " hours, " << minutes << " minutes, " << rem_seconds << " seconds"<< endl; 
}

/*
Enter the number of seconds:31600000
31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/