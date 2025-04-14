//
// Created by Missyourcat on 2025/4/12.
//
#include<stdio.h>
int main()
{
    int i = 5;
    int *i_pointer = &i;//定义一个指针变量，指针变量名为i_pointer
    //指针变量的初始化是某个变量取地址来赋值，不能随机写
    printf("i = %d\n", i);//直接访问
    printf("i_pointer = %d\n", *i_pointer);//通过指针访问（间接访问）
    printf("i_pointer = %d\n", *i_pointer);//通过指针访问（间接访问）
    //&*i_pointer 等价 i_pointer, 都是取地址
    return 0;
}
