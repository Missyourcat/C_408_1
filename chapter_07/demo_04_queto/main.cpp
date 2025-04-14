#include<stdio.h>
//c++向下兼容c语言
void modify_num(int &b)//形参中写&,要成为引用
{
    b = b + 1;
}
//C++引用
//在子函数内修改主函数的普通变量的值
int main()
{
    int a = 10;
    modify_num(a);
    printf("after a = %d\n",a);
    return 0;
}