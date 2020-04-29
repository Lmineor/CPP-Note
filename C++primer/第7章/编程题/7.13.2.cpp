#include<iostream>

const int Score_Count {10};

using namespace std;

int input(float ar[]);  // 输入成绩并返回输入的个数
void show(const float ar[], int nums);
float calculate(const float ar[], int nums);

int main()
{
    float glof_score[Score_Count];
    int nums;
    nums = input(glof_score);
    show(glof_score, nums);
    cout << "average score is " << calculate(glof_score, nums);
    return 0;
}

int input(float ar[])  // 输入成绩并返回输入的个数
{
    float tmp;
    cout << "Enter your score: ";
    cin >> tmp;
    int i = 0;
    for(i; i< Score_Count; i++)
    {
        if(tmp < 0) break;
        ar[i] = tmp;
        cout << "Enter your score: ";
        cin >> tmp;
    }
    return i; // i 表示此时数组中的元素个数
}

void show(const float ar[], int nums)
{
    cout << "score is: ";
    for (int i = 0; i < nums; i++)
    {
        cout << ar[i] << ", ";
    }
    cout << endl;
}
float calculate(const float ar[], int nums)
{
    float sum = 0.0;
    for(int i=0; i<nums; i++) sum += ar[i];
    if(nums) return sum / nums;
    else
    {
        cout << "nums is 0";
        return 0.0;
    }
}

