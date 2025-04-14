//
// Created by Missyourcat on 2025/4/14.
//
#include<stdio.h>
//typedef取别名
typedef struct student{
    int num;
    char name[20];
    char sex;
}stu, *p_stu;//stu等价于struct student，p_stu等价于struct student *
typedef int INGETER;
int main()
{
    stu s = {1, "zhangsan", 'm'};
    stu *p = &s;
    p_stu q = &s;
    //都是结构体指针
    INGETER num = 10;
    printf("num = %d, p->num = %d\n", num, p->num);
    return 0;
}