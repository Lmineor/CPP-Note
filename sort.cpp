#include<iostream>

using namespace std;
typedef int ElemType;

void InsertSort(ElemType A[], int n)
//直接插入排序
{
    int i, j;
    for(i=2;i<=n;i++)
        if(A[i]<A[i-1])
        {
            A[0] = A[i];
            for(j=i-1;A[0]<A[j];--j) A[j+1] = A[j]; //向后挪位
            A[j+1] = A[0];//复制到插入位置
        }
}

void InsertSort2(ElemType A[], int n)
//折半插入排序
{
    int i, j, low, high, mid;
    for(i=2;i<=n;i++)
    {
        A[0] = A[i];
        low = 1;
        high = i-1;
        while(low<=high)
        {
            mid = (low+high)/2;
            if(A[mid]>A[0]) high = mid-1;
            else low = mid+1;
        }
        for(j=1;j>=high+1;--j) A[j+1] = A[j];//统一后移元素，空出插入位置
        A[high+1] = A[0];//插入操作
    }
}


void ShellSort(ElemType A[], int n)
//希尔排序
{
    for(int dk=n/2;dk>=1;dk=dk/2) //步长变化
    {
        for(int i=dk+1;i<n;++i)
        {
            if(A[i]<A[i-dk]) //需将A[i]插入到有序增量子表
            {
                A[0] = A[i]; //暂存在A[0]
                int j;
                for(j=i-dk;j>0&&A[0];j-=dk) A[j+dk] = A[j]; //记录后移，查找插入的位置
                A[j+dk] = A[0]; //插入
            }//if
        }
    }
}


void BubbleSort(ElemType A[], int n)
//冒泡排序
{
    int i;
    bool flag;
    for(i=0;i<n-1;i++)
    {
        flag = false; //表示本趟冒泡是否发生过交换的标志
        for(int j=n-1;j>i;j--)
        {
            if(A[j-1]>A[j]){
                swap(A, j, j-1);
                flag = true;
            }
        }//for
        if(flag==false) return ;//本趟遍历后没有发生交换，说明表已经有序
    }
}

void QuickSort(ElemType A[],int low,int high){
	if(low<high){ //递归跳出的条件
	//Partition()就是划分操作，将表A[low····high]划分为满足上述条件的两个子表
		int pivotpos = Partition(A,low,high); //划分
		QuickSort(A,low,pivotpos-1); //依次对两个子表进行递归排序
		QuickSort(A,pivotpos+1,high);
	}
}


int Partition(ElemType A[],int low,int high){
//严版教材中的划分算法(一趟排序过程)
	ElemType pivot = A[low]; //将当前表中第一个元素设置枢轴值，对表进行划分
	while(low<high){ //循环跳出条件
		while(low<high&&A[high]>=pivot) --high;
		A[low] = A[high]; //将比枢轴值小的元素移动到左端
		while(low<high&&A[low]<=pivot) ++low;
		A[high] = A[low]; //将比枢轴值大的元素移动到右端
	}
	A[low] = pivot; //枢轴元素存放到最终位置
	return low; //返回存放枢轴的最终位置
}


void SelectSort(ElemType A[],int n){
//对表A作简单的选择排序，A[]从0开始存放元素
int i, j, min;
	for(i=0;i<n-1;i++){ //一共进行n-1趟
		min = i; //记录最小元素位置
		for(j=i+1;j<n;j++) //在A[i····n-1]中选择最小的元素
			if(A[j]<A[min]) min = j; //更新最小元素的位置
		if(min!=i) swap(A, i, min); //与第i个位置交换
	}
}

void swap(ElemType A[], int i, int j)
{
    ElemType temp;
    temp = A[i];
    A[i] = A[j];
    A[j] = temp;
}
