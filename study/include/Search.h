#ifndef _SEARCH_H
#define _SEARCH_H

#include <iostream>


using namespace std;
typedef int ElemType;
typedef struct {
    ElemType *elem;
    int TableLen;
}SSTable;


int Search_Seq(SSTable ST, ElemType key); //顺序查找
int Binary_Search(SSTable L,ElemType key); //折半查找

#endif