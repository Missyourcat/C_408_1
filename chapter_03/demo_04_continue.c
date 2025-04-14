//
// Created by Missyourcat on 2025/4/12.
//
#include<stdio.h>
int main()
{
    int i, total;
    total = 0;
    for(i = 1;i <= 100; i++)
    {
        if(i % 2 == 0)
        {
            continue;//continue 下的代码不执行，直接跳过，继续下一次循环
        }
        total += i;
    }
    printf("total = %d\n", total);

    i = 0, total = 0;
    while (i <= 100)
    {
        if(i % 2 == 0)
        {
            i++;
            continue;
        }
        total += i;
        i++;
    }
    printf("total = %d\n", total);
    return 0;
}
