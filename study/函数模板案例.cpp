// 函数模板案例.cpp
//实现通用 对数组进行排序的函数
// 从大到小
// 选择排序

#include<iostream>
using namespace std;

template<class T>
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<class T>
void print(T arr[], int len)
{
    for(int i=0; i<len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


template<class T>
void mySort(T arr[], int len)
{
    for(int i = 0; i < len; i++)
    {
        int max = i; // 认定最大值的下标
        for(int j = i + 1; j < len; j++)
        {
            if(arr[max] < arr[j])
            {
                max = j; // 更新最大值下标
            }
        }
        if(max != i)
        {
            mySwap(arr[max], arr[i]);
        }
    }
}


void test01()
{
    // 测试char数组
    char charArr[] = "abcd";
    int num = sizeof(charArr) / sizeof(char) -1;
    print(charArr, num);
    mySort(charArr, num);
    print(charArr, num);
}

void test02()
{
    // 测试char数组
    int intArr[] = {1,2,3,4,5,6};
    int num = sizeof(intArr) / sizeof(int);
    mySort(intArr, num);
    print(intArr, num);
}

int main()
{
    test01();
    test02();
    return 0;
}