#include<iostream>
#include<string>
int main()
{
    std::string food = "Pizza";
    std::string &meal = food;
    std::cout << food << "\n" << meal << "\n";
    meal = "Burger";//如果你更改参考变量的值，原始变量也会 也变了（反之亦然），因为它们都指的是同一个记忆 地点
    std::cout << food << "\n" << meal << "\n";
    return 0;
}