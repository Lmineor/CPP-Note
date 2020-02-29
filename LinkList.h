#ifndef _LINK_LIST_H
#define _LINK_LIST_H
#include<iostream>
#include<malloc.h>

using namespace std;

typedef int ElemType;

typedef struct LNode
{
    ElemType data; //数据域
    struct LNode *next;    
}LNode, *LinkList;

typedef struct DNode{ //定义双链表结点类型
	ElemType data; //数据域
	struct DNode *prior,*next; //前驱和后继指针
}DNode, *DLinklist;

LinkList InsertList1(LinkList &L, ElemType e);
LinkList InsertList2(LinkList &L, ElemType e);
LNode *GetElem(LinkList L,int i);
LNode *LocateElem(LinkList L, ElemType e);
int Length(LinkList L);
bool PrintList(LinkList L);

#endif