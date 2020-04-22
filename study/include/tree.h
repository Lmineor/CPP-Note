#ifndef _TREE_H
#define _TREE_H

#include<iostream>
#include<malloc.h>

using namespace std;

typedef int ElemType;

typedef struct BiTNode{
	ElemType data; //数据域
	struct BiTNode *lchild,*rchild; //左右孩子指针
}BiTNode,*BiTree;




void PreOrder(BiTree T); //先序遍历
void InOrder(BiTree T); //中序遍历
void PostOrder(BiTree T); //后续遍历

#endif //_TREE_H