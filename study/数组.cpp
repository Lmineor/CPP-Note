#include <iostream>

using namespace std;
int main(void)
{
    // 二维数组
    /*
    定义方式：
    */

    int arr1[2][3]; // 第一种
    arr1[0][0] = 1;
    arr1[0][1] = 1;
    
    int arr2[2][3] = { // 第二种
        {1,2,3},
        {4,5,6}
    };

    int arr3[2][3] = {1,2,3,4,5,6}; // 第三种

    int arr4[][3] = {1,2,3,4,5,6}; // 第四种

    // 查看二维数组所占内存空间
    cout << sizeof(arr3) << endl; // 24 = 6*4(int 大小)
    // 查看二维数组内存地址
    cout << arr3 << endl; // 0x61fdc0
    cout << arr3[0] << endl; // 0x61fdc0 第一行内存地址
    return 0;
}