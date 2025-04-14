//
// Created by Missyourcat on 2025/4/9.
//
#include<stdio.h>
int main()
{
    int a = 1, b = 2;
    b = a + 25;
//    a + 25 = b;
//    a = a + 3;
    a += 3;//提高编译速度
    b *= 5;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}