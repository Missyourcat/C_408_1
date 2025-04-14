//
// Created by Missyourcat on 2025/4/9.
//
#include<stdio.h>
int main()
{
    int i = 0;
    i && printf("you can‘t see me!");//当i为假时，不会执行逻辑与后的表达式，称为短路运算
//    if(i)
//    {
//        printf("you can‘t see me!");
//    }
    i = 1;
    i || printf("you can see me!");
    return 0;
}