//
// Created by Missyourcat on 2025/4/12.
//

//子函数把某一个常用功能，封装起来的作用
//数组名传递到子函数后，子函数的形参接收到的是数组的起始地址，因此不能把数组的长度传递给子函数
void print_1(int a[])
{
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
}
void print_2(int a[], int length)
{
    int i;
    for(i = 0; i < length; i++)
    {
        printf("%3d", a[i]);
    }
    a[0] = 100;
    printf("\n");
}
#include<stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int i;
    print_1(a);
    printf("====================\n");
    print_2(a, sizeof(a) / sizeof(int));
//    for(i = 0; i < sizeof(a) / sizeof(int); i++)
//    {
//        printf("%d\n", a[i]);
//    }
    printf("====================\n");
    printf("a[0] = %d", a[0]);
    return 0;
}
