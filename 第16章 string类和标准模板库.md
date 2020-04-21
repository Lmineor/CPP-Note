## 16.1 string类
C++ 是cstring 而c为string.h
### 16.1.1 构造字符串
![string类的构造函数](https://ae03.alicdn.com/kf/H23285625028a475aadbbc1f81f36f87fv.png)
NBTS:null-termindated string
```cpp
//introducing the string class
#include<iostream>
#include<string>

int main()
{
    using namespace std;
    string one("Lottery Winner!");
    cout << one <<endl;
    string two(20, '$');
    cout << two << endl;
    string three(one); //ctor#3
    cout << three << endl;
    one += "Oops!";  // overloaded+=
    cout << one << endl;
    two = "Sorry it was ";
    three[0] = 'P';
    string four;
    four = two+three;
    cout << four << endl;
    char alls[] = "All's well that ends well";
    string five(alls, 20);              //ctor #5
    cout << five << "!\n";
    string six(alls+6, alls+10);        //ctor #6
    cout << six << ", ";
    string seven(&five[6], &five[10]);  //ctor #6 again
    cout << seven << "...\n";
    string eight(four, 7, 16);          // ctor #7
    cout << eight << " in motion!" << endl;
    return 0;
}
```

### 16.1.2 string 类的输入
对于C-风格字符串，有3种方式:
```cpp
char info[1000];
cin >> info;                // read a word
cin.getline(info, 100);     // read a line ,discard \n
cin.get(info, 100);         // read a line ,leave \n in queue
```
对于string对象，有两种方式:
```cpp
string stuff;
cin >> stuff;
getling(cin, stuff);
```
两个版本的```getline()```都有一个可选参数，用于指定使用哪个字符来确定输入的边界。
```cpp
cin.getline(info, 100, ':'); // read up to:, discard:
getling(stuff, ':);          //read up to:, discard:
```
在功能上，它们之间的主要区别在于，string版本的```getline()```将自动调整目标string对象的大小，使之刚好能够存储输入的字符：
```cpp
char fname[10];
string lname;
cin >> fname;               //could be a problem if input size > 9 characters
cin >> lname;               // can read a very, very long word
cin.getline(fname, 10);     //may truncate input
getline(cin, fname);        // no truncation
```
自动调整大小的功能让string版本的getline()不需要指定读取多少个字符的数值参数。
### 16.1.3 使用字符串
1. + 连接字符串
2. 比较字符串：按照ASCII码进行比较
```cpp
string snake1("cobra");
string snake2("coral");
char snakes3[20] = "anaconda";
if (snake1 < snake2)
    ....
if (snake1 == snake3)
    ....
if (snake3 != snake2)
    ....
```

3. 可以确定字符串的长度：
size()和length()成员函数都返回字符串中的字符数：
```cpp
if (snake1.length() == snake2.length())
    cout << "Both strings have the same length .\n";
```
[!重载的find方法1](https://ae01.alicdn.com/kf/H25bc6ac110574437b2b2c793e867835a7.png)
[!重载的find方法2](https://ae05.alicdn.com/kf/Hbd92a2279e3c43f5b42637e36d2843017.png)

### 16.3.1 模板类vector
要创建vector模板对象，可使用通常的<type>表示法来指出要使用的类型。另外vector模板使用动态内存分配，因此可以用初始化参数来指出需要多少矢量
例如：
```cpp
#include <vector>
using namespace std;
vector<int> ratings(5);
int n;
cin >> n;
vector<double> socres(n);
// 模板创建后，可以使用通常的数组表示法来访问各个元素
ratings[0] = 9;
for(int i=0; i< n; i++)
    cout << scores[i] << endl;
```
### 16.3.2 可对矢量执行的操作
- size() 返回容器中元素数目
- swap() 交换两个容器的内容
- begin() 返回一个指向容器中第一个元素的迭代器
- end() 返回一个表示超过容器尾的迭代器

> 迭代器？

是一个广义的指针，事实上，它可以是指针，也可以是一个可对其执行类似指针的操作----如解除引用和递增----的对象
例如：要为vector的double类型规范声明一个迭代器
```cpp
vector<double>::iterator pd; //pd and iterator
//假设scores是一个vector<double>对象:
vector<double> scores;
则可以使用迭代器pd执行这样的操作:
pd = scores.begin();    //have an point to the first element
*pd = 22.3;             //dereference pd and assign value to first element
++pd;                   //make pd point to the next element

/*
vector<double>::iterator pd; //pd and iterator
定义的更简便的方法
auto pd = scores.begin;     //auto 类型自动推断
*/
```
> 超过超尾

一种迭代器。指向容器最后一个元素后面的那个元素。end()成员函数表示超过结尾的位置。
应用：显示容器的内容
```cpp
for (pd = scores.begin(); pd != scores.end(); pd++)
    cout << *pd << endl;
```
> push_back() 将严肃添加到矢量末尾

例如：
```cpp
vector<double> scores;
double temp;
while(cin>>temp && temp >= 0)
    scores.push_back(temp);
cout << "You entered " << scores.size() << "socres.\n";
```

> erase() 删除矢量中给定区间的元素。它接受两个迭代器参数，这些参数顶一个要删除的区间。

第一个迭代器指向区间的起始处，第二个迭代器位于区间终止处的后一个位置。
例如
```cpp
scores.erase(scores.begin(), socores.begin()+2);    //即删除begin()和begin()+1指向的元素
```

> insert()方法与erase()方法相反
第一个参数指定新元素的插入位置
第二个、第三个迭代器参数定义了被插入区间，该区间通常是另一个容器对象的一部分
例如：下面的代码将矢量new_v 中除了第一个元素之外的所有元素的插入到old_v矢量的第一个元素前面
vector<int> old_v;
vector<int> new_v;
...
old_v.insert(old_v.begin(), new_v.bein()+1, new_v.end())
```