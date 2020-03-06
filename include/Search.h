#ifndef _SEARCH_H
#define _SEARCH_H

#include <iostream>


using namespace std;
typedef int ElemType;
typedef struct {
    ElemType *elem;
    int TableLen;
}SSTable;


int Search_Seq(SSTable ST, ElemType key)

#endif