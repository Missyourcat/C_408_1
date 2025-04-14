//
// Created by Missyourcat on 2025/3/9.
//
#include<stdio.h>
struct A{
    int a;
    char b;
    short c;
};

struct B{
    char b;
    int a;
    short c;
    char d;
    char e;
};
int main()
{
    struct A num;

    printf("%llu\n",sizeof(struct A));
    printf("%llu\n",sizeof(num.a));
    printf("%llu\n",sizeof(num.b));
    printf("%llu\n",sizeof(num.c));
    printf("%llu\n",sizeof(struct B));
}