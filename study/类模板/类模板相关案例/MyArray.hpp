// MyArray.h
// 自己的通用的数组类
#pragma once

#include <iostream>

using namespace std;

template<class T>
class MyArray
{
    public:
        //有参构造
        MyArray(int capacity)
        {
            // cout << "MyArray param call" << endl;
            this->m_Capatcity = capacity;
            this->m_Size = 0;
            this->pAddress = new T[this->m_Capatcity];
        }

        //拷贝构造
        MyArray(const MyArray & arr)
        {
            // cout << "MyArray copy" << endl;
            this->m_Capatcity = arr.m_Capatcity;
            this->m_Size = arr.m_Size;

            // 深拷贝
            this->pAddress = new T[arr.m_Capatcity];

            //将arr中的数据都拷贝过来
            for (int i= 0; i < this->m_Size; i++)
            {
                this->pAddress[i] = arr.pAddress[i];
            }
        }

        //operator= 防止浅拷贝
        MyArray& operator=(const MyArray& arr)
        {
            // cout << "MyArray ==" << endl;
            //先判断原来堆区是否有数据，若有，先释放
            if(this->pAddress != nullptr)
            {
                delete[] this->pAddress;
                this->pAddress = nullptr;
                this->m_Capatcity = 0;
                this->m_Size = 0;
            }

            //深拷贝
            this->m_Capatcity = arr.m_Capatcity;
            this->m_Size = arr.m_Size;
            this->pAddress = new T[arr.m_Capatcity];
            for (int i= 0; i < this->m_Size; i++)
            {
                this->pAddress[i] = arr.pAddress[i];
            }
            return *this;
        }

        // 尾插法
        void Push_Back(const T & val)
        {
            //判断容量是否等于大小
            if(this->m_Capatcity == this->m_Size)
            {
                return;
            }
            this->pAddress[this->m_Size] = val;
            this->m_Size++;
        }


        // 尾删法
        void Pop_Back()
        {
            //让用户访问不到最后一个元素，即为尾删，逻辑删除
            if(this->m_Size == 0)
            {
                return;
            }
            this->m_Size--;
        }

        //通过下表方式访问数组中的元素
        T & operator[](int index)
        {
            return this->pAddress[index];
        }

        //返回数组容量
        int getCapacity()
        {
            return this->m_Capatcity;
        }

        //返回数组大小
        int getSize()
        {
            return this->m_Size;
        }
        
        // 析构函数
        ~MyArray()
        {
            
            if(this->pAddress != nullptr)
            {
                // cout << "~MyArray" << endl;
                delete[] this->pAddress;
                this->pAddress = nullptr;
            }
        }

    private:
        T * pAddress; // 指针指向堆区开辟的真实数组

        int m_Capatcity; // 数组容量
        int m_Size; // 数组大小
};