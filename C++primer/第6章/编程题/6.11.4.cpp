#include <iostream>

using namespace std;

const int strsize {30};
const int StructSize {4};

struct bop
{
    char fullname[strsize];         //real name
    char title[strsize];            // job title
    char bopname[strsize];          // secret BOP name
    int preference;                 // 0 = fullname, 1 = title, 2 = bopname
};

void showmenu();
void showname(bop *p, char choice, int i);


int main()
{
    bop p[StructSize] = 
    {
        {
            "xiaoming",
            "soler",
            "ming",
            0
        },
        {
            "xiaohong",
            "pc",
            "hong",
            1
        },
        {
            "xiaotian",
            "farmer",
            "tian",
            1
        },
        {
            "xiaoliang",
            "worker",
            "liang",
            2
        },
    };
    showmenu();
    for (int i=0; i < StructSize; i++)
    {
        char choice;
        cout << "Enter your choice: ";
        cin.get(choice);
        cin.get();          //清楚缓冲区换行符
        if(choice == 'q') break;
        showname(p, choice, i);
    }

}

void showmenu()
{
    cout << "Benevolent Order of Programmers Report\n";
    cout << "a. display by name         b. display by title\n"
            "c. display by bopname      d. display by preference\n"
            "q. quit\n";    
}

void showname(bop *p, char choice, int i)
{
    switch (choice)
        {
        case 'a':
            cout << p[i].fullname << endl;
            break;
        case 'b':
            cout << p[i].title << endl;
            break;
        case 'c':
            cout << p[i].bopname << endl;
            break;
        case 'd':
            switch (p[i].preference)
            {
            case 0:
                cout << p[i].fullname << endl;
                break;
            case 1:
                cout << p[i].title << endl;
                break;
            case 2:
                cout << p[i].bopname << endl;
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
}