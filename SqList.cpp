#include "SqList.h"

bool InitList(SqList &L){
    //构造一个空的线性表L
    L.data=(ElemType*)malloc(sizeof(ElemType) * InitSize);
    if(!L.data) exit(OVERFLOW);//存储分配失败
    L.length = 0; //空表长度为0
    L.MaxSize = InitSize; //初始存储容量
    cout << "初始化成功"<< endl;
    return true;
}//InitList

bool InsertList(SqList &L, int i, ElemType e){
    //将元素e插入到顺序表L中第i个位置
    if(i < 1 || i > L.length + 1) return false;
    if(L.length >= L.MaxSize) return false;
    for(int j = L.length; j > i; j--) 
        L.data[j] = L.data[j-1];
    L.data[i-1] = e;
    L.length++;
    return true;
}


bool ListDelte(SqList &L, int i, ElemType &e){
    if(i < 1 || i > L.length) return false;
    e = L.data[i-1];
    for(int j = i; j<L.length; j++)
        L.data[j] = L.data[j+1]; // 将第i个位置之后的元素向前移动
    L.length--;
    return true;
}

int LocateElem(SqList L, ElemType e){
    int i;
    for(i = 0;i < L.length;i++)
        if(L.data[i] == e)
            return i+1;
    return 0;
}

bool Empty(SqList L){
    if(L.length == 0)
        return true;
    else return false;
}

int AllList(SqList L){
    if(!Empty(L)){
        int i;
        cout<<"当前线性表中的元素为：";
        for(i=0;i<L.length;i++)
            cout<<L.data[i]<<'\t';
        cout<<endl;
        return 1;
    }
    else return 0;
}
int main(){
    SqList L;
    int loc;
    ElemType e;
    InitList(L);
    InsertList(L, 1, 3);
    InsertList(L, 2, 5);
    InsertList(L, 3, 2);
    InsertList(L, 4, 5);
    InsertList(L, 5, 2);
    InsertList(L, 6, 4);
    InsertList(L, 7, 9);
    AllList(L);
    loc = LocateElem(L, 5);
    cout << "查找到的位置为:"<< loc <<endl;
    ListDelte(L, 2, e);
    cout << "该位置上的元素为:"<< e <<endl;
    AllList(L);
    return 1;
}