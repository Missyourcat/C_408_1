//
// Created by Missyourcat on 2025/4/14.
//
#include<stdio.h>
void change(int *i)//形参
{
    *i = 20;//*i等价于i，只是间接访问
}
int main()
{
    int i = 10;
    printf("before change i = %d\n", i);
    change(&i);//C语言的函数调用是值传递，实参赋值给形参，j=&i
    printf("after change i = %d\n", i);
    return 0;
}
