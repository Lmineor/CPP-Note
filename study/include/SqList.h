#ifndef _SqlList_H
#define _SqlList_H
#include<iostream>
#include<malloc.h>

#define InitSize 100
#define OVERFLOW -2

using namespace std;

typedef int ElemType;
typedef struct SqList
{
    ElemType *data;
    int MaxSize, length; // 当前表中元素个数
}SqList;

bool InitList(SqList &L);
bool InsertList(SqList &L, int i, ElemType e);
bool ListDelte(SqList &L, int i, ElemType &e);
int LocateElem(SqList L, ElemType e);
bool Empty(SqList L);
int AllList(SqList L);



#endif