# include<iostream>

using namespace std;

// 值传递
void swap(int num1, int num2){
    cout << "before:" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    int tmp = num1;
    num1 = num2;
    num2 = tmp;
    cout << "after:" << endl;
    cout << num1 << endl;
    cout << num2 << endl;

}


int main(){
    int a = 1;
    int b = 2;
    cout << a << endl;
    cout << b << endl;
    // 值传递，就是函数调用时实参将数值传入给形参
    //当我们做值传递时， 函数的形参发生改变，并不会影响实参
    swap(a, b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}