#ifndef _SqStack_H
#define _SqStack_H

#include<iostream>
#include<malloc.h>

#define MAXSIZE 50
using namespace std;

typedef int ElemType;

typedef struct SqStack
{
    ElemType data[MAXSIZE];
    int top;
}SqStack;

void InitStack(SqStack &S); //初始化一个空栈S。
bool StackEmpty(SqStack S);//判断一个栈是否为空，若栈S为空则返回true，否则返回false。
bool Push(SqStack &S, ElemType x);//进栈，若栈S未满，则将x加入使之成为新栈顶。
bool Pop (SqStack &S, ElemType &x);//出栈，若栈S非空，则弹出栈顶元素，并用x返回。
bool GetTop(SqStack S, ElemType &x);//读栈顶元素，若栈S非空，则用x返回栈顶元素。
bool ClearStack(SqStack &S);//销毁栈，并释放栈S占用的存储空间。

#endif