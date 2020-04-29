#include <iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};


void show_as_val(box b1);
void show_as_loc(box * b2);

int main()
{
    box bb1 {
        "Google",
        2.0,
        3.0,
        4.0,
        5.0,
    };
    box bb2 {
        "Baidu",
        2.1,
        2.2,
        2.3,
    } ;
    show_as_val(bb1);
    show_as_loc(&bb2);
    return 0;
}


void show_as_val(box b1)
{
    cout << b1.maker << endl;
    cout << b1.height << endl;
    cout << b1.length << endl;
    cout << b1.volume << endl;
    cout << b1.width << endl;
}

void show_as_loc(box * b2)
{
    cout << "volume is: "<<b2->height * b2->length * b2->width << endl;
}