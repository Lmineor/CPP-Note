#include <iostream>
// #include <cstring> // 76

// int main()
// {
//     using namespace std;
//     /*3*/
//     char first_name[30];
//     char last_name[30];
//     cout << "Enter your first name: ";
//     cin >> first_name;
//     cout << "Enter your last name: ";
//     cin >> last_name;
//     strcat(last_name, ", ");            //注意这里的,要用双引号
//     strcat(last_name, first_name);
//     cout << "Here's the information in a single string: "<< last_name <<endl;
// }

// 以上为第3题解法

#include <string>

int main()
{
    using namespace std;
    string first_name;
    string last_name;
    cout << "Enter your first name: ";
    getline(cin, first_name);
    cout << "Enter your last name: ";
    getline(cin, last_name);
    last_name += ", ";
    last_name += first_name;
    cout << "Here's the information in a single string: "<< last_name <<endl;
}