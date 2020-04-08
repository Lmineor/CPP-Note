#include "include/SqQueue.h"

void InitQueue(SqQueue &Q)
{
    //初始化队列，构造一个空队列Q。
    Q.rear = Q.front = 0; //init the front and rear point of queue
}
bool QueueEmpty(SqQueue Q)
{
    //判队列空，若队列Q为空则返回true，否则返回false。
    if(Q.front == Q.rear) return true;
    else return false;
}
bool EnQueue(SqQueue &Q, ElemType x)
{
    //入队，若队列Q未满，将x加入，使之成为新的队尾。
    if((Q.rear+1)%MAXSIZE==Q.front) return false; //队满
    Q.data[Q.rear] = x;
    Q.rear = (Q.rear + 1) % MAXSIZE;
    return true;
}
bool DeQueue(SqQueue &Q, ElemType &x)
{
    //出队，若队列Q非空，删除队头元素，并用x返回。
    if(Q.rear==Q.front) return false; //队空
    x = Q.data[Q.front];
    Q.front = (Q.front+1)%MAXSIZE;
    return true;
}
bool GetHead(SqQueue Q, ElemType &x)
{
    //读队头元素，若队列Q非空，则将队头元素赋值给x。
    if(Q.rear==Q.front) return false;
    x = Q.data[Q.front];
    return true;
}