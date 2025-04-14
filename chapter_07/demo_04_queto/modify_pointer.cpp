//
// Created by Missyourcat on 2025/4/14.
//
#include<stdio.h>
void modify_pointer(int *&p, int *q)//引用必须和变量名紧邻
{
    p = q;
}
void modify_pointer_2(int **p, int *q)//**二级指针
{
    printf("**p = %d\n", **p);

    *p = q;
}
//子函数内修改主函数的一级指针变量
int main()
{
    int *p = NULL;
    int i = 10;
    int j = 20;
    int *q = &i;
    modify_pointer(p, q);
    printf("%d\n", *p);
    q = &j;
    printf("------------------\n");

    modify_pointer_2(&p, q);
    printf("%d\n", *p);
    return 0;//推出代码不为0时，代表进程异常结束
}