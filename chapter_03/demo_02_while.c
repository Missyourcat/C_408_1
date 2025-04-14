//
// Created by Missyourcat on 2025/4/10.
//
#include<stdio.h>
int main()
{
    int i = 1, total = 0;
    while(i <= 100)
    {
        total = total + i;
        i++;
    }
    printf("total = %d\n", total);
    return 0;
}
