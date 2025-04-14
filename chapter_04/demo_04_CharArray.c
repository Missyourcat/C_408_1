//
// Created by Missyourcat on 2025/4/12.
//

void print(char d[])//模拟printf("%s", c)操作
{
    int i = 0;
    while(d[i])
    {
        printf("%c", d[i]);
        i++;
    }
    printf("\n");
//    d[0] = 'H';
}
#include<stdio.h>
//输出字符串乱码时，要去查看字符数组是否存储了结束符'\0'
int main()
{
//    char c[10] = {'I', 'a', 'm', 'h', 'a', 'p', 'p', 'y'};
//    char c[10] = "I am happy";
    char c[5] = "hello";
    printf("%s\n", c);//使用%s来输出一个字符串，直接把字符数组名放到printf后面
    char d[5] = "how";
    printf("%s\n", d);
    print(d);
    printf("%s\n", d);
    return 0;
}