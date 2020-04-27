#include <iostream>

int main()
{
    using namespace std;
    cout << "Please enter ont of the following choices: " << endl;
    cout << "c) carnivore\t\t" << "p) pianist" << endl;
    cout << "t) tree\t\t" << "g) game" << endl;
    char choice;
    cout << "Please enter a c, p, t, or g:";
    cin.get(choice);

    /*
    下面的while用来
    1.判断用户的输入是否在choice中，若不是
    2.重置cin以接受新的输入
    3.删除错误输入
    4.提示用户再输入
    */
    while (choice != 'c' && choice != 'p' && choice != 't' && choice != 'g')
    {
        cin.clear();
        while(cin.get() != '\n')
            continue; //get rid of bad input
        cout << "Please enter a c, p, t, or g:";
        cin.get(choice);
    }
    switch (choice)
    {
    case 'c':
        cout << "carnivore";
        break;
    case 'p':
        cout << "pianist";
        break;
    case 't':
        cout << "tree";
        break;
    case 'g':
        cout << "game";
        break;
    default:
        break;
    }
}