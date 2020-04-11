#include <iostream>
using namespace std;
template <class T>
void Swap(t & a, T &b);

struct job
{
    char name[40];
    double salary;
    int floor;
};

//explicit specialization
template <> void Swap(job &j1, job &j2);
void Show(job &j1);

int main()
{
    using namespace std;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10, j = 20;
    cout << "i, j = " << i << ", "<< j << endl;
    cout << "Using complier generated int swapper:"<< endl;
    Swap(i, j); 
    cout << "Now i, j = " << i << ", " << j <<endl;

    job sue = {"Susan", 6300.60, 8};
    job sidney = {"Sidney", 8799.99, 9};
    cout << "Before job Swapping:\n";
    Show(sue);
    Show(sidney);
    Swap(sue, sidney); // uses vodi swap(job &, job &)
    cout << "After job swapping:\n";
    Show(sue);
    Show(sidney);
    return 0;
}

template <class T>
void Swap(T & a, T &b) //general version
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// swaps just the salary and floor fields of a job structure

template <> void Swap(job &j1, job &j2) //specialization
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(job &j)
{
    using namespace std;
    cout << j.name << ": $" << j.salary
            << "on floor " << j.floor <<endl;
}