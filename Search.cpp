#include "include/Search.h"

int Search_Seq(SSTable ST, ElemType key)
{
    ST.elem[0] = key;//哨兵
    for(i=ST.TableLen;ST.elem[i]!=key;i--);//从后往前找
    return i;
}