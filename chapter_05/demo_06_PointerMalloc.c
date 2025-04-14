//
// Created by Missyourcat on 2025/4/14.
//
#include<stdio.h>
#include<stdlib.h>//malloc使用的头文件
#include<string.h>
int main()
{
    int size;//size代表要申请多大字节的空间
    char *p;
    scanf("%d", &size);
    //malloc返回的void *代表无类型指针,void *类型指针无法偏移，因此不会定义
    p = (char *)malloc(size);//转换为char *，动态申请堆空间
//    p[0] = 'H';
//    p[1] = 'o';
//    p[2] = 'w';
//    p[3] = '\0';
    strcpy(p, "Malloc success");
    puts(p);
    free(p);//free时必须使用malloc申请时返回的指针值，不能使用任何偏移
    return 0;
}
