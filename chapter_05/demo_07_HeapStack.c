//
// Created by Missyourcat on 2025/4/14.
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//堆和栈的差异
char *print_stack()
{
    char c[100] = "I am print_steak func";
    char *p;
    p = c;
    printf("print_stack:");
    puts(p);
    return p;
}
char *print_malloc()
{
    char *p = (char *)malloc(100);//堆空间在整个进程中一直有效，不因为函数结束而释放
    strcpy(p,"I am print_malloc func");
    printf("print_malloc:");
    puts(p);
    return p;
}
int main()
{
    char *p;
    p = print_stack();//栈空间使用func后释放掉，所以会乱码
    printf("after print_stack:");
    puts(p);
    p = print_malloc();
    printf("after print_malloc:");
    puts(p);
    free(p);
    printf("after free:");
    puts(p);
    return 0;
}