# include "include/tree.h"
#include "include/SqStack.h"
#include "include/SqQueue.h"

typedef BiTNode ElemType;

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


void InOrder1(BiTree T)
//二叉树中序遍历的非递归算法，算法需要借助一个栈
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


void LevelOrder(BiTree T)
{
    InitQueue(Q);
    BiTree p;
    EnQueue(Q, T); //将根节点入队
    while (!QueueEmpty(Q))
    {
        DeQueue(Q, p); //队头元素出队
        visit(p);
        if(p->lchild != NULL)
        {
            EnQueue(Q, p->lchild);
        }
        if(p->rchild!=NULL)
        {
            EnQueue(Q, p->rchild);//右子树不空，则右子树入队列
        }
    }
    
}



/*树与二叉树的应用*/



void visit(BiTree T)
{
    cout << T->data << endl;
}