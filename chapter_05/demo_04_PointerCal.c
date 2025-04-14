//
// Created by Missyourcat on 2025/4/14.
//
//指针的偏移使用场景，也就是指针进行加减
#include<stdio.h>
#define N 5
int main()
{
    int a[N] = {1, 2, 3, 4, 5};//数组名内存储了数组的起始地址，a中存储的就是一个地址值
    int *p;//定义变量指针
    p = a;
    int i;
    for(i = 0; i < N; i++)
    {
        printf("%3d", *(p + i));//偏移的长度为基地址长度，等价于a[i]
    }
    printf("\n=====================================\n");
    p = &a[4];//取变量地址，指针变量p指向数组最后一个元素
    for(i = 0;i < N; i++)//逆序输出
    {
        printf("%3d", *(p - i));
    }
    return 0;
}
