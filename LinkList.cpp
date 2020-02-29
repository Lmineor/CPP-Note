#include<iostream>
#include<malloc.h>

using namespace std;
typedef int ElemTpye;
typedef struct LNode
{
    ElemTpye data; //数据域
    struct LNode *next;    
}LNode, *LinkList;


LinkList CreatList1(LinkList &L){
    //从表尾到表头逆向建立单链表L,每次均在头结点之后插入元素
    LNode *s;
    int x;
    cin >> x;
    while (x != 9999)
    {
        s = (LNode*)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        cin >> x;
    }//while
    return L;
}


int main(){
    // LinkList L;
    L = (LinkList)malloc(sizeof(LNode)); //创建头结点
    L->next = NULL;
    CreatList1(L);
}