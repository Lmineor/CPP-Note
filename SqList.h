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
