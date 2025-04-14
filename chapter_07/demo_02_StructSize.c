//
// Created by Missyourcat on 2025/4/14.
//
#include<stdio.h>
struct student_type1{
    double score;//double是一种浮点类型，8个字节，浮点型有float和double两种
    short age;//short是整形，2字节
};
struct student_type2{
    double score;
    int height;
    short age;
};
struct student_type3{
    int height;
    char sex;
    short age;
};
//结构体对齐
int main()
{
    struct student_type1 stu1;
    struct student_type2 stu2;
    struct student_type3 stu3;
    printf("student_type1 size=%d\n",sizeof(stu1));
    printf("student_type2 size=%d\n",sizeof(stu2));
    printf("student_type2 size=%d\n",sizeof(stu3));
    return 0;
}