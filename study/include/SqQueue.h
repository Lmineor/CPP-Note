#ifndef _SqQueue_H
#define _SqQueue_H

#include<iostream>
#include<malloc.h>

#define MAXSIZE 50
using namespace std;

typedef int ElemType;

typedef struct SqQueue
{
    ElemType data[MAXSIZE];
    int front, rear;
}SqQueue;

void InitQueue(SqQueue &Q);//初始化队列，构造一个空队列Q。
bool QueueEmpty(SqQueue Q);//判队列空，若队列Q为空则返回true，否则返回false。
bool EnQueue(SqQueue &Q, ElemType x);//入队，若队列Q未满，将x加入，使之成为新的队尾。
bool DeQueue(SqQueue &Q, ElemType &x);//出队，若队列Q非空，删除队头元素，并用x返回。
bool GetHead(SqQueue Q, ElemType &x);//读队头元素，若队列Q非空，则将队头元素赋值给x。

#endif