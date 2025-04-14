//
// Created by Missyourcat on 2025/3/5.
//
#include<stdio.h>
int main()
{
    int i, ret;
    float f;
    char c;
    ret = scanf("%d%f%c",&i ,&f ,&c);//ret 是匹配成功的个数
//    ret = scanf("%d %f %c",&i ,&f ,&c);//ret 是匹配成功的个数
    printf("i=%d,f=%5.2f,c=%c\n",i, f, c);
    return 0;
}
