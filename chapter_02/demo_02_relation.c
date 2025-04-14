//
// Created by Missyourcat on 2025/3/19.
//
#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d",&a))
    {
        if(3<a && a<10) //3<a<10 从左往右计算，无论a是什么值，3<a只能是0或1，所以a<10只能是0或1
        {
            printf("a is between 3 and 10\n");
        }
        else
        {
            printf("a is not between 3 and 10\n");
        }
    }
    return 0;
}
