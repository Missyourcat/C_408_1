//
// Created by Missyourcat on 2025/4/14.
//
#include<stdio.h>
//指针与一维数组的传递
void change_1(char *d)
{
    *d = 'H';
    d[1] = 'E';//*(d + 1) = 'E'与其等价
    *(d + 2) = 'L';
}
void change_2(char d[])
{
    *d = 'h';
    d[1] = 'e';//*(d + 1) = 'E'与其等价
    *(d + 2) = 'l';
}
int main()
{
    char c[10] = "hello";
    change_1(c);
    puts(c);
    change_2(c);
    puts(c);
    return 0;
}