## C++
### 变量名命名规则
- 变量名区分大小写
- 只能使用字母、数字和下划线
- 不能使用保留字符
- 不能使用两个下划线或下划线和大写字符开头的名称
- 不能使用一下划线开头的名称
- 对长度不限制
- 一般用下划线将单词分开或从第二个单词开始将每个单词的第一个字母大写
### 除法
如果两个操作数都是整数，则C++将执行整数除法，结果的小数部分被丢弃，结果仍然是整数。如果有一个或两个操作数是浮点数，则结果为浮点数。
例
```cpp
#include <iostream>
using namespace std;
int main(){
    cout<<"整数除法:9/5="<<9/5<<endl;
    cout<<"浮点数除法:9.0/5.0="<<9.0/5.0<<endl;
    cout<<"混合除法:9/5.0="<<9/5.0<<endl;
}
//结果
整数除法:9/5=1
浮点数除法:9.0/5.0=1.8
混合除法:9/5.0=1.8
```
### auto
auto让编译器能够根据初始值的类型推断变量的类型。
### 数组
声明数组应指出三点
- 存储在每个元素中的值的类型
- 数组名
- 数组中的元素数
例如
```cpp
short months[12];

//格式
typeName arrayName[arraySize]
//arraySize 指定元素数目，必须是整型常数或const值，也可以是常量表达式

//访问
months[0] //是months数组的第一个元素
```
**编译器不会检查使用的下标是否有效**
```cpp
//初始化方法
int points[3] = {1, 2, 3};
```
**注意**
- 等号可以省略
- 可在大括号内不设置任何东西，这将把所有元素都设置为0
- 禁止缩窄转换
![缩窄转换](https://ae01.alicdn.com/kf/Ha73361fe4e644f87bca9c464f2b3054dH.png)


### 字符串
**'\0**'表示字符串结尾
#### string类
使用
```cpp
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1;
    string str2 = "lex";
    cout<<str2<<endl;
}
```
**注意**
需要使用双引号
##### 赋值、拼接和附加
- 赋值
数组中，不能将一个数组赋值给另一个数组，但可以将一个string对象赋值给另一个string对象
- 拼接附加
使用+、+= 号
### 结构简介
创建结构包括两步
- 定义结构描述：描述并标记了能够存储在结构中的各种数据类型
- 按描述创建结构变量（结构数据对象）
例
```cpp
struct worker
{
    char name[20];
    int salary;
    double height;
};

```
![结构说明](https://ae04.alicdn.com/kf/H6a68536368514d31b721b89d1293cbdc2.png)
定义结构后便可以创建这种类型的变量了：
```cpp
worker daxing;
worker haidian;
```
- 结构使用：
使用成员运算符(.)来访问成员，例如：
```cpp
daxing.name;
haidian.salary;
```
- 在程序中使用结构
```cpp
#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable guest=
    {
        "Gloriour",
        1.88,
        29.99
    };
    inflatable pal=
    {
        "Audacious",
        3.12,
        32.99
    };
    cout<<"两个项"<<guest.name;
    cout<<"和"<<pal.name<<endl;
    cout<<"两个价钱相加等于"<<guest.price + pal.price << endl;
    return 0;
}
```
局部变量和全局变量
![变量](https://ae03.alicdn.com/kf/H8dd1d0c08c37422cb13a7153713ab8848.png)
**结构支持赋值运算**
##### 结构初始化
- =可选
- 大括号内未包含任何东西，则各个成员都初始化为0
- 不允许缩窄变换

### 结构数组
```cpp
inflatable gifts[100] //创建包含100个inflatable结构的数组
```
### 结构中的位字段
略