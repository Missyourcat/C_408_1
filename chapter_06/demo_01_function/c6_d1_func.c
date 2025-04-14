//
// Created by Missyourcat on 2025/4/14.
//
#include "c6_d1_func.h"
// 函数中不能有其他函数的定义
void print_message()//函数定义
{
    printf("Hello World!\n");
    print_star(6);//实参
}
int print_star(int i)//i 形式参数
{
    printf("*****************\n");
    printf("print_star %d\n", i);
    return i + 3;
}
