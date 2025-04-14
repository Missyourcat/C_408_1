//
// Created by Missyourcat on 2025/4/14.
//
//#include<stdio.h>
#include "c6_d1_func.h"
//函数的声明和定义
//void print_message();//函数声明
int main()
{
    int a = 10;
    a = print_star(a);
    printf("------------------\n");
    print_message();//调用函数
    printf("------------------\n");
    print_star(5);
    printf("------------------\n");

    return 0;
}
//void print_message()//函数定义
//{
//    printf("Hello World!\n");
//}