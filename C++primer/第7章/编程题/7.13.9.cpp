#include <iostream>

using namespace std;
const int SLEN = 30;
struct student
{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[], int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while(cin.get() != '\n')
    {
        continue;
    }

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for(int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(student pa[], int n)
{
    if(n < 1) 
    {
        cout << "num of n is invalid";
        return 0;
    }
    int i = 0;
    cout << "Enter your name:";
    for(i; i < n; i++)
    {
        // if(cin.getline(pa[i].fullname, SLEN) && pa[i].fullname[0] != '\0')
        if(cin.getline(pa[i].fullname, SLEN))
        {
            cout << "Enter your hobby:";
            cin.getline(pa[i].hobby, SLEN);
            cout << "Enter your ooplevel:";
            cin >> pa[i].ooplevel;
            cout << "Enter your name:";
            cin.clear();
        }
        else break;
    }
    return i;
}

void display1(student st)
{
    cout << "Name is: ";
    cout << st.fullname << endl;
    cout << "hobby is: ";
    cout << st.hobby << endl;
    cout << "ooplevel is: ";
    cout << st.ooplevel << endl;
}

void display2(const student *ps)
{
    cout << "Name is: ";
    cout << ps->fullname << endl;
    cout << "hobby is: ";
    cout << ps->hobby << endl;
    cout << "ooplevel is: ";
    cout << ps->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    for(int i=0; i < n; i++)
    {
        cout << "Name is: ";
        cout << pa[i].fullname << endl;
        cout << "hobby is: ";
        cout << pa[i].hobby << endl;
        cout << "ooplevel is: ";
        cout << pa[i].ooplevel << endl;
    }
}
