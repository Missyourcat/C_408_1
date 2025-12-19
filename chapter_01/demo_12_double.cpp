#include<iostream>
int main()
{
    double myNum = 19.99;
    // float的精度只有6到7位十进制数字，而double变量的精度大约是15位
    float f1 = 35e3;
    float d1 = 12E4;
    std::cout << f1 << d1 << myNum;
    return 0;
}