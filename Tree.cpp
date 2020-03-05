# include"include/tree.h"
#include "include/SqStack.h"


void PreOrder(BiTree T)
{
    if(T != NULL){
        visit(T); //访问根结点
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}


void InOrder(BiTree T)
{
    if(T!=NULL){
        InOrder(T->lchild);
        visit(T);
        InOrder(T->rchild);
    }
}


void PostOrder(BiTree T)
{
    if(T!=NULL){
        PostOrder(T->lchild);
        PostOrder(T->rchild);
        visit(T);
    }
}


void LevelOrder(BiTree T)
{   
    SqStack S;
    InitStack(S); 
    BiTree p = T;
    while (p||!StackEmpty(S))
    {
        if(p)
        {
            Push(S, p);
            p = p->lchild;
        }
        else
        {
            Pop(S, p);
            visit(p);
        }
        
    }
    
}

void visit(BiTree T)
{
    cout << T->data << endl;
}