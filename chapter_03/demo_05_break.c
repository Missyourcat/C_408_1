//
// Created by Missyourcat on 2025/4/12.
//
#include<stdio.h>
int main()
{
    int i, total;
    for(i = 1, total = 0; i <= 100; i++)
    {
        if(total > 2000)
        {
            break;
        }
        total += i;
    }
    printf("total = %d, i= %d", total, i);
    return 0;
}