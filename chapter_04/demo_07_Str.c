//
// Created by Missyourcat on 2025/4/12.
//
#include<stdio.h>
#include<string.h>

int mystrlen(char c[])
{
    int i = 0;
    while(c[i])//找到结束符后，循环结束，从而得到字符串长度
    {
        i++;
    }
    return i;
}

int main()
{
    int len;
    char c[20];
    char d[100]="world";
    char e[100];
    gets(c);
    puts(c);
    len = strlen(c);
    printf("len = %d\n", len);
    len = mystrlen(c);
    printf("mystrlen len = %d\n", len);
    strcat(c, d);//字符串拼接，d拼接到c中
    puts(c);
    strcpy(e, c);//把c中的字符串复制到e中
    puts(e);
    printf("c?d = %d\n", strcmp(c, d));//对比的是逐个字符的ASCII值
    printf("c?d = %d\n", strcmp(c, "how"));//c大于"how"，返回值是正值，c小于"how"，返回值是负值
    strcpy(d,"copy");//从新给d赋值
    puts(d);
    return 0;
}