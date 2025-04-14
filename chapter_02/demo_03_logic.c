//
// Created by Missyourcat on 2025/4/9.
//
#include<stdio.h>
int main()
{
    int year;
    int i = 0, j = 0;
    while(scanf("%d", &year))
    {
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            printf("%d is leap year\n", year);
        } else{
            printf("%d is not leap year\n", year);
        }
    }
    i = !!j;
    printf("%d", i);
    return 0;
}
