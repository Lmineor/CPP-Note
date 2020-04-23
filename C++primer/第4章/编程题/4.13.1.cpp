#include <iostream>

const int NameSize = 20;

int main()
{
    using namespace std;
    struct info
    {
        char first_name[NameSize];
        char last_name[NameSize];
        char grade;
        int age;
    };
    info xiaoming;
    cout << "What is your first name? ";
    cin.getline(xiaoming.first_name, NameSize);
    cout << "Whar is your last name? ";
    cin.getline(xiaoming.last_name, NameSize);
    cout << "What letter grade do you deserve? ";
    cin >> xiaoming.grade;
    cout << "What is your age? ";
    cin >> xiaoming.age;
    cout << "Name: " << xiaoming.last_name << ", " << xiaoming.first_name <<endl;
    cout << "Grade: " << char(xiaoming.grade + 1) << endl;
    cout << "Age: " << xiaoming.age;
}

/*
What is your first name? Betty Sue
Whar is your last name? YeWe
What letter grade do you deserve? B
What is your age? 22
Name: YeWe, Betty Sue
Grade: C
Age: 22
*/