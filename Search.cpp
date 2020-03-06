#include "include/Search.h"

int Search_Seq(SSTable ST, ElemType key)
{
    ST.elem[0] = key;//哨兵
    for(i=ST.TableLen;ST.elem[i]!=key;i--);//从后往前找
    return i;
}

int Binary_Search(SSTable ST,ElemType key)
{
    int low = 0,high = ST.TableLen-1,mid;
    while (low<=high)
    {
        mid = (low+high)/2;
        if(ST.elem[mid]==key) return mid;
        else if (ST.elem[mid]>key) high=mid-1;
        else low=mid+1;
    }
    return -1;
}