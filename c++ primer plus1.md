## 共用体
共用体union是一种数据格式，它能够存储不同的数据类型，但只能通知存储其中的一种类型。也就是说，结构可以同时存储int、long和double，共用体只能存储int、long或double。
例如
```cpp
union one4all
{
    int int_val;
    long long_val;
    double double_val;
};
//可以使用one4all变量来存储int、long或double，条件是在不同的时间进行
one4all pail;
pail.int_val = 15; //存一个int
pail.double_val = 1.36; //存一个double，但是int值就丢失了
```
共用体每次只能存储一个值，因此必须有足够的空间来存储最大的成员，所有共用体的长度为其最大成员的长度。
共用体的用途之一为：当数据项使用两种或更多种格式（但不会同时使用）时，可节省空间。
例如：
假设管理一个小商品目录，其中有一些商品的id为整数，而一些的id为字符串。在这种情况下，可以这样做。

## 枚举enum
使用enum的句法与使用结构相似。例如
```cpp
enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet}
```
- 让spectrum成为新类型的名称；spectrum被称为枚举（enumeration），就像struct变量被称为结构一样。
- 将red、orange、yellow等为符号变量，它们对应整数值0~7.这些常量叫做枚举量（enumerator）。
利用枚举名声明变量
```cpp
spectrum band;
band = blue; //有效。blue是一个枚举量
band = 2000;//无效，2000不是枚举量，编译器会出错
```
**枚举量只有赋值运算，没有定义算数运算**
### 设置枚举量的值
可以使用赋值运算符来显示地设置枚举量的值
```cpp
enum bits {one=1, two=2, four=4, eight=8};
// 指定的值必须是整数。也可以只显示地定义其中一些枚举量的值
enum bigstep{first, second=100, third};
// first在默认情况下是0， 后面没有被初始化的枚举量的值将比前面的枚举量大1，因此，third的值为101
//可以创建多个值相同的枚举量
enum {zero, null=0, one, numero_uno=1};
//zero和null都为0， one和umero_unp都为1.
```
### 枚举的取值范围
可以将取值范围种的任何整数值
假如bits和myflag定义如下
```cpp
enum bits{one=1, two=2, four=4, eight=8};
bits myflag;
//下面的代码是合法的
myflag = bits(6);
```