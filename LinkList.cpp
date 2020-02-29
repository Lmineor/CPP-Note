#include"LinkList.h"

LinkList InsertList1(LinkList &L, ElemTpye e){
    //从表尾到表头逆向建立单链表L,每次均在头结点之后插入元素
    LNode *s;
    s = (LNode*)malloc(sizeof(LNode));
    s->data = e;
    s->next = L->next;
    L->next = s;
    return L;
}

LinkList InsertList2(LinkList &L, ElemTpye e){
    //从表头到表尾正向建立单链表L，每次均在表尾插入元素
    LNode *s, *r = L;
    while (r->next) r = r->next; // 找到最后一个结点
    s = (LNode*)malloc(sizeof(LNode));
    s->data = e;
    r->next = s;
    s->next = NULL;
    return L;
}


LNode *GetElem(LinkList L,int i)
{
//本算法取出单链表L（带头结点）中第i个位置的结点指针
	int j = 1; //计数，初始为1
	LNode *p = L->next; //头结点指针赋给p
	if(i==0)
		return L; //若i等于0，则返回头结点
	if(i<1)
		return NULL; //若i无效，则返回NULL
	while(p&&j<i){ //从第1个结点开始找，查找第i个结点
		p = p->next;
		j++;
	}
	return p; //返回第i个结点的指针，如果i大于表长，p=NULL，直接返回p即可
}

LNode *LocateElem(LinkList L, ElemTpye e)
{
    LNode *p = L->next;
    while (p!=NULL && p->data!=e) p = p->next;
    return p;
}


int Length(LinkList L)
{
    LNode *p = L->next;
    int i = 0;
    while(p!=NULL)
    {
        i++;
        p = p->next;
    }
    return i;
}

bool PrintList(LinkList L){
    LNode *p = L->next;
    if(p == NULL) return false;
    while (p)
    {
        cout << p->data << "->";
        p = p->next;
    }
    cout << "NULL" <<endl;
    return true;
}

int main(){
    LinkList L1, L2;
    L1 = (LinkList)malloc(sizeof(LNode)); //头插法创建头结点
    L2 = (LinkList)malloc(sizeof(LNode)); //尾插法创建头结点
    L1->next = NULL;
    L2->next = NULL;
    InsertList1(L1, 3);
    InsertList1(L1, 1);
    InsertList1(L1, 5);
    InsertList1(L1, 3);
    InsertList1(L1, 9);
    InsertList1(L1, 5);
    InsertList1(L1, 7);
    PrintList(L1);
    InsertList2(L2, 3);
    InsertList2(L2, 1);
    InsertList2(L2, 5);
    InsertList2(L2, 3);
    InsertList2(L2, 9);
    InsertList2(L2, 5);
    InsertList2(L2, 7);
    PrintList(L2);
    cout << "长度为：" << Length(L1) << endl;
    cout<< GetElem(L1, 2)->data<<endl;
    cout<< LocateElem(L1, 7)->data<<endl;
    return 1;
}