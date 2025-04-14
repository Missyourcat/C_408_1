//
// Created by Missyourcat on 2025/4/12.
//
#include<stdio.h>
int main()
{
    char c[20];
    gets(c);//gets中放入字符数组的数组名即可
    puts(c);//puts等价于printf("%s\n",c);puts内放的参数是字符数组名
//    printf("%s\n",c);
    return 0;
}