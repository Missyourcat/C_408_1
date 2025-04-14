//
// Created by Missyourcat on 2025/4/14.
//
#include<stdio.h>
//递归要点：1.找公式 2.结束条件
int f(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return n * f(n - 1);
}
int step(int n)//上台阶， 到第N个台阶，有多少种走法
{
    if(1 == n || 2 == n)
    {
        return n;
    }
    return step(n - 2) + step(n - 1);
}
int step_2(int n)//上台阶，到第N个台阶，有多少种走法
{
    if(1 == n || 2 == n )
    {
        return n;
    } else if (3 == n){
        return 4;
    }
    return step_2(n - 3) + step_2(n - 2) + step_2(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    printf("%d\n", step(n));//1-1-1-1 1-1-2 1-2-1 2-1-1 2-2
    printf("%d", step_2(n));//1-1-1-1 1-1-2 1-2-1 1-3 2-1-1 2-2 3-1
    return 0;
}