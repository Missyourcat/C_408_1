//
// Created by Missyourcat on 2025/4/12.
//
#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    int i = 10, j = 20;
    a[5] = 6;//越界访问
    a[6] = 7;
    a[7] = 8;
    printf("i = %d\nj = %d", i, j);
    return 0;
}
