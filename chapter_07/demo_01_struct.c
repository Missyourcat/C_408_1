//
// Created by Missyourcat on 2025/4/14.
//
#include<stdio.h>
//结构体大小必须是其最大成员的整数倍
struct student{
    int num;
    char name[20];
    char sex; //1字节，存储时拓展3字节
    int age;
    float score;
    char addr[30];//30%4= 2 ,需要再补两个字节
};//结构体类型声明，最后一定要加分号
int main()
{
    struct student s = {1001, "张三", 'M', 20, 89.5, "北京"};//定义初始化
    struct student S_array[3];//数组结构体
    //结构体输出必须单独去访问内部的每个成员变量
    s.num = 12;
    s.name

    printf("%d %s %c %d %f %s\n", s.num, s.name, s.sex, s.age, s.score, s.addr);
    scanf("%d%s %c%d%f%s", &s.num, s.name, &s.sex, &s.age, &s.score, s.addr);
    printf("%d %s %c %d %f %s\n", s.num, s.name, s.sex, s.age, s.score, s.addr);
    for(int i = 0; i < 3; i++)
    {
        scanf("%d%s %c%d%f%s", &S_array[i].num, S_array[i].name, &S_array[i].sex, &S_array[i].age, &S_array[i].score, S_array[i].addr);
    }
    printf("============================================\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d %s %c %d %f %s\n", S_array[i].num, S_array[i].name, S_array[i].sex, S_array[i].age, S_array[i].score, S_array[i].addr);
    }
    return 0;
}