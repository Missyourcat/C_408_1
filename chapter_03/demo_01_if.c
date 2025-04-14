//
// Created by Missyourcat on 2025/4/10.
//
#include<stdio.h>
int main()
{
    int i, number;
    double cost;
//    while(scanf("%d", &i))
//    {
//        if(i > 0)
//        {
//            printf("i is bigger than 0\n");
//        }else{
//            printf("i is no bigger than 0\n");
//        }
//    }
     while(scanf("%d", &number))
    {
        if(number > 500) cost = 0.15;
        else if(number > 300) cost = 0.10;
        else if(number > 100) cost = 0.075;
        else if(number > 50) cost = 0.05;
        else cost = 0;
        printf("cost is %.4f\n", cost);
    }

    return 0;
}