#include <iostream>
using namespace std;
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sortArray(int* arr, int size)
{
    // 冒泡
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}
void printArray(int* arr, int size)
{
    cout << "数组元素: ";
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i);
        if (i != size - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
}
int main()
{
    int size;
    int* arr = NULL;
    cout << "请输入数组元素个数: ";
    cin >> size;
    if (size <= 0)
    {
        cout << "错误：数组大小必须为正整数" << endl;
        return 1;
    }
    arr = new int[size];
    if (arr == NULL)
    {
        cout << "错误：内存分配失败" << endl;
        return 1;
    }
    cout << "请输入 " << size << " 个整数:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "元素[" << i << "]: ";
        cin >> *(arr + i); 
    }
    cout << "\n========== 原始数组 ==========" << endl;
    printArray(arr, size);
    cout << "\n========== 调试信息 ==========" << endl;
    cout << "数组首地址: " << arr << endl;
    cout << "数组首元素地址: " << &arr[0] << endl;
    cout << "指针值: " << arr << " (指向数组首地址)" << endl;
    cout << "首元素值: " << *arr << endl;
    cout << "次元素值: " << *(arr + 1) << " (地址: " << arr + 1 << ")" << endl;

    sortArray(arr, size);

    cout << "\n========== 排序后的数组 ==========" << endl;
    cout << "使用指针方式输出:" << endl;
    int* p = arr;
    for (int i = 0; i < size; i++)
    {
        cout << *p++;
        if (i != size - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
    // 释放动态数组内存
    delete[] arr;
    arr = NULL;

    cout << "\n========== 内存已释放 ==========" << endl;

    return 0;
}