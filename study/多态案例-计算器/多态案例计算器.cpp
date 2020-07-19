#include <iostream>
#include <string>

using namespace std;

// 分别利用普通写法和多态技术实现计算器


// 普通写法
class Calculator
{
    public:
        int getResult(string oper)
        {
            if (oper == "+")
            {
                return m_Num1 + m_Num2;
            }
            else if (oper == "-")
            {
                return m_Num1 - m_Num2;
            }
            else if (oper == "*")
            {
                return m_Num1 * m_Num2;
            }
            // 如果像扩展新的功能，需要修改源码
            //在真实开发中 提倡开闭原则
            //开闭原则：多扩展进行开发，对修改进行关闭 
            else
                return 0;

        }
        int m_Num1;
        int m_Num2;
};

void test01()
{
    // 创建计算器对象
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 20;
    cout << c.getResult("+");
}

// 利用多态实现计算器

//实现计算器抽象类

class AbstractCalculator
{
    public:
        virtual int getResult()
        {
            return 0;
        }
        int m_Num1;
        int m_Num2;
};

//加法
class AddCalculator : public AbstractCalculator
{
    public:
        int getResult()
        {
            return m_Num1 + m_Num2;
        }
};

// 减法
class SubCalculator : public AbstractCalculator
{
    public:
        int getResult()
        {
            return m_Num1 - m_Num2;
        }
};


void test02()
{
    //多态使用条件
    // 父类指针或引用指向子类对象
    AbstractCalculator * abc = new AddCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 20;

    cout << abc->m_Num1 << "+ " << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc;

    abc = new SubCalculator;
    abc->m_Num1 = 10;
    abc->m_Num2 = 20;

    cout << abc->m_Num1 << "- " << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc;
}
int main()
{
    // test01();
    test02();
    return 0;
}