//
// Created by Missyourcat on 2025/3/5.
//
#include<stdio.h>
int main()
{
    int i;
    char c;
    float f;
    scanf("%d", &i);//scanf用来读取标准输入，scanf把标准输入内的内容，需要放到某个变量空间里，因此变量必须取地址
    printf("i = %d\n", i);//取得是缓冲区整形
    scanf("%c", &c);//缓冲区中存在换行符号
    printf("c_1 = %c\n", c);
    printf("============================\n");

    scanf("%d", &i);
    printf("i = %d\n", i);
    scanf("%c", &c);
    printf("c_2_1 = %c\n", c);
    scanf("%c", &c);
    printf("c_2_2 = %c\n", c);
    scanf("%c", &c);//缓冲区中无换行符号
    printf("c_2_3 = %c\n", c);
    fflush(stdin);//清空标准缓冲区
    scanf("%c", &c);//缓冲区中无换行符号
    printf("c_3_1 = %c\n", c);
    scanf("%c", &c);//缓冲区中存在字符
    printf("c_3_2 = %c\n", c);
    scanf("%c", &c);//缓冲区中存在字符
    printf("c_3_3 = %c\n", c);
    printf("============================\n");
    scanf("%f", &f);//scanf阻塞，是因为标准缓冲区是空的，在读取整形数，浮点数，字符串会忽略'\n'(回车符）,空格符等；字符型不会忽略
    printf("f = %f\n", f);
    return 0;
}
