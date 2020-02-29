#include "SqStack.h"

void InitStack(SqStack &S) 
{
    //初始化一个空栈S。
    S.top = -1;//初始化栈顶指针
}//InitStack

bool StackEmpty(SqStack S)
{
    //判断一个栈是否为空，若栈S为空则返回true，否则返回false。
    if(S.top == -1) return true;
    return false;
}

bool Push(SqStack &S, ElemType x)
{
    //进栈，若栈S未满，则将x加入使之成为新栈顶。
    if(S.top == MAXSIZE-1) return false;
    S.data[++S.top] = x;
    return true;
}

bool Pop (SqStack &S, ElemType &x)
{
    //出栈，若栈S非空，则弹出栈顶元素，并用x返回。
    if(S.top == -1) return false;
    x = S.data[S.top--];
    return true;
}
bool GetTop(SqStack S, ElemType &x)
{
    //读栈顶元素，若栈S非空，则用x返回栈顶元素。
    if(S.top == -1) return false;
    x = S.data[S.top];
    return true;
}
bool ClearStack(SqStack &S)
{
    //销毁栈，并释放栈S占用的存储空间.
    delete S.data;
    S.top = -1;
    return true;
}