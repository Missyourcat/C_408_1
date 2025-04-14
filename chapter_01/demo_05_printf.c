//
// Created by Missyourcat on 2025/3/4.
//
#include<windows.h>
#include<stdio.h>
int main()
{
    int age = 21;
    printf("Hello %s, you are %d years old.\n", "Bob", age);
    int i_1 = 1001;
    float f_1 = 96.3;
    printf("学生学号:%d,分数:%f\n", i_1, f_1);
    int i_2 = 100;
    float f_2 = 96.1;
    printf("学生学号:%d,分数:%5.2f\n", i_2, f_2);
    printf("==========================\n");
    printf("学生学号:%5d,分数:%5.2f\n", i_1, f_1);//右对齐
    printf("学生学号:%5d,分数:%6.2f\n", i_2, f_2);//六位（6）,小数点后两位（.2）
    printf("==========================\n");
    printf("学生学号:%-5d,分数:%5.2f\n", i_1, f_1);//左对齐
    printf("学生学号:%-5d,分数:%5.2f\n", i_2, f_2);
    return 0;
}