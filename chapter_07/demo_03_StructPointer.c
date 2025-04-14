//
// Created by Missyourcat on 2025/4/14.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    int num;
    char name[20];
    char sex;
};
//结构体指针
int main()
{
    struct student s = {1001,"zhangsan",'m'};
    struct student sarr[3] = {
            {1001,"zhangsan",'m'},
            {1002,"lisi",'w'},
            {1003,"wangwu",'m'}
    };
    struct student *p;//定义一个结构体指针变量
    p = &s;//结构体变量的地址赋值给结构体指针变量
    printf("num=%d,name=%s,sex=%c\n", s.num, s.name, s.sex);
    printf("num=%d,name=%s,sex=%c\n", (*p).num, (*p).name, (*p).sex);//方式一
    printf("num=%d,name=%s,sex=%c\n", p->num, p->name, p->sex);//方式二（推荐）
    p = sarr;
    p = &sarr[0];//等价上方
    printf("num=%d,name=%s,sex=%c\n", p->num, p->name, p->sex);//方式二（推荐）
    printf("===========================\n");
    p += 1;
    printf("num=%d,name=%s,sex=%c\n", p->num, p->name, p->sex);
    printf("===========================\n");
    //给结构体指针p通过malloc申请空间，并对其成员赋值，再访问
    p = (struct student *)malloc(sizeof(struct student));
    p->num = 1004;
    strcpy(p->name,"zhaoliu");
    p->sex = 'w';
    printf("num=%d,name=%s,sex=%c\n", p->num, p->name, p->sex);
    return 0;
}