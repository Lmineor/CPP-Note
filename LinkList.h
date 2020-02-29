#include<iostream>
#include<malloc.h>

using namespace std;
typedef int ElemTpye;
typedef struct LNode
{
    ElemTpye data; //数据域
    struct LNode *next;    
}LNode, *LinkList;