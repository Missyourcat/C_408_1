//
// Created by Missyourcat on 2025/4/14.
//
#include<stdio.h>
int i = 10;//i是一个全局变量，不建议使用，从此处到源文件结束(全程变量)
void print(int a)//如果是int i, 形参则看做一个局部变量
{
    printf("I am print i = %d\n", i);
}
int main()
{
//    int i = 5;//如果全局变量和局部变量重名，采用就近原则
    {
        int j = 21;
    }
    //局部变量的有效范围是离自己最近的{}
    printf("I am main i = %d\n", i);
//    printf("I am main j = %d\n", j);
//    for(int k = 0; k < 10;)//for循环内定义的k，外部不可使用
//    {
//
//    }
//    printf("I am main k = %d\n", k);
    i = 20;
    print(5);
    return 0;
}