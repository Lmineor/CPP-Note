# 函数
## 函数参数和按值传递
> 形参

用于接收传递值得变量

> 实参

传递给函数得值

## 函数和数组
示例
函数头
```cpp
int sum_arr(int arr[], int n) // arr = array_name, n = size
```
看起来arr是一个数组,而方括号为空则表明,可以将任何长度得数组传递给该函数,实际情况并非如此:arr实际上并不是数组,而是一个指针!但是在编写函数得其余部分时可以arr看作是数组.
```cpp
#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n); //函数声明
int main()
{
    using namespace std;
    int cookies[ArSize] = {1, 2, 4, 5, 6, 6, 8, 4};
    int sum = sum_arr(cookies, ArSize);
    cout<<"Total cookies eaten:"<<sum<<endl;
    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;
    for (int i=0; i<n; i++)
        total = total + arr[i];
    return total;
}
/*
Total cookies eaten:36
*/
```

探讨原因:
C++将数组名解释为其第一个元素得地址:
cookies = &cookies[0];
该规则有一些例外:
- 数组声明使用数组名来标记存储位置
- 对数组名使用sizeof将得到整个数组得长度(以字节为单位)
- 将地址运算符&用于数组名时,将返回整个数组得地址,例如&cookies将返回一个32字节内存块的地址(int长度为4个自己的话)

记住以下恒等式:
```cpp
arr[i] == *(arr + i)
&arr[i] == ar + i
```
注意:将指针(包括数组名)加1,实际上是加上了一个与指针指向的类型的长度(以字节为单位)
> 欺骗函数

程序第二次使用该函数时,这样调用它:
sum = sum_arr(cookies, 3)l
通过告诉该函数cookies有3个元素,可以让它计算前3个元素的总和.
此外,还可以提供假的数组起始位置:
sum = sum_arr(cookies+4, 4);
**注意**
为将数组类型和元素数量告诉数组处理函数,请通过两个不同的参数来传递它们:
```cpp
void fillArray(int arr[], int Size);
//而不是
void fillArray(int arr[Size]);
```
### 更多数组函数示例
1. 为防止函数无意中修改数组的内容,可在声明形参时使用关键字const:
```cpp
void show_array(const double ar[], int n);
```
该声明表明:
指针ar指向的是常量数据,函数不能修改ar数组.注意,并不是意味着原始数组必须是常量,而只是意味着不能再show_array()函数中使用ar来修改这些数据.
2. 使用数组区间的函数
对于数组而言,标识数组结尾的参数将是指向最后一个元素后面的指针.例如,假设有这样的声明:
double elbuod[20];
则指针elboud和elboud+20定义了区间.首先,数组名elboud指向第一个元素.表达式elboud+19指向最后一个元素(即elboud[19]),因此elboud+20指向数组结尾后面的一个位置.
## 函数和二维数组
假设有下面的代码:
```cpp
int data[3][4] = {
    {1, 2, 3, 4},
    {9, 8, 7, 6},
    {2, 4, 6, 8}
    }
int total = sum(data, 3);
```
其正确的原型为:
```cpp
int sum(int (*ar2)[4], int size);
```
其中的括号是必不可少的,因为下面的声明将声明一个由4个指向int的指针组成的数组,而不是由一个指向4个int组成的数组的指针;另外,函数参数不能是数组:
```cpp
int *ar2[4];
```
可读性更强的原型定义
```cpp
int sum(int ar2[][4], int size);
```
### 返回C风格字符串的函数
程序举例:
```cpp
#include <iostream>
char * buildstr(char c, int n); //函数声明
int main()
{
    using namespace std;
    int times;
    char ch;
    ch = 'A';
    times = 10;
    char * ps = buildstr(ch, times);
    cout<<ps<<endl;
    delete [] ps; // free memory
    ps = buildstr('+', 20); //reuse pointer
    cout<<ps<<"Done"<<ps<<endl;
    delete [] ps;
    return 0;
}

char * buildstr(char c, int n)
{
    char * pstr = new char(n+1); //n+1要加上'\0'
    pstr[n] = '\0'; //terminte string
    while (n-- > 0)
        pstr[n] = c;
    return pstr;
}
/*
AAAAAAAAAA
++++++++++++++++++++Done++++++++++++++++++++
*/
```

## 函数和结构
### 7.6.1 传递和返回结构
```cpp
struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};
```
当结构比较小时,按值传递结构最合理
### 7.6.3 传递结构的地址
传递结构的地址可以节省时间和空间
按值传递时的show_polar()函数:
```cpp
void show_polar(polar dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.296577;
    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << "degress\n";
```
修改成按址传递
需要修改三个地方:
- 调用函数时,将结构的地址(&pplace)而不是结构本身(pplace)传递给它;
- 将形参声明为polar的指针,即polar*类型.由于函数不应修改结构,因此使用const限定符
- 由于形参是指针而不是结构,因此应简介成员运算符(->),而不是成员运算符(句点).
```cpp
void show_polar(const polar * pda)
{
    using namespace std;
    const double Rad_to_deg = 57.2;
    cout << "distance = " << pda->distance;
    cout << ", angle = " << pda->angle * Rad_to_deg;
    cout << "degress\n";
}
```
## 7.7 函数和string对象
如果需要string数组,只需使用通常的数组声明格式即可
```cpp
string list[SIZE];//an array holding 5 string object
```

## 7.10 函数指针
### 7.10.1 函数指针的基础知识
1. 获取函数的地址
方法:使用函数名(后面不跟参数)即可. 也就是说,如果think()是一个函数,则think就是该函数的地址. 要将函数作为参数进行传递,必须传递函数名.
```cpp
process(think);    //passes address of think() to process()
thought(think());  // passes return value of think() to thought()
```
2. 声明函数指针
> 注意区分
```cpp
double (*pf)(int);    //pf指向返回值为double类型的函数
double *pf(int);      //pf() 是一个函数,这个函数返回一个指向double类型指针
```
> 使用

```cpp
double pam(int);
double (*pf)(int);
pf = pam; //pf是一个指针指向pam()函数
```
**注意**
```cpp
double ned(double);
int ted(int);
double (*pf)(int);
pf = ned;           //无效
pf = ted;           //无效
```
- 使用指针来调用函数
使用(*pf)时,只需将它看作函数名即可;
```cpp
double pam(int);
double (*pf)(int);
pf = pam;
double x = pam(4);
double y = (*pf)(5);
C++ 也允许像使用函数名那样使用pf:
double y = pf(5);
```
### 7.10.2 函数指针示例
```cpp
#include <iostream>
double betsy(int);
double pam(int);

void estimate(int lines, double (*pf)(int));

int main()
{
    using namespace std;
    int code;
    cout<<"How many ling of code do you need?";
    cin>>code;
    cout<<"Here's Betsy's estimate:"<<endl;
    estimate(code, betsy);
    cout<<"Here's Pam's estimate:"<<endl;
    estimate(code, pam);
    return 0;
}

double betsy(int lns){
    return 0.05*lns;
}

double pam(int lns){
    return 0.03*lns+0.0004*lns*lns;
}

void estimate(int lines, double (*pf)(int)){
    using namespace std;
    cout<<lines<<"lines will take ";
    cout<<(*pf)(lines)<<"hour(s"<<endl;
}
```

