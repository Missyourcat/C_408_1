#include<iostream>
#include<string>

int main()
{
    std::string cars[5] = {"volvo", "Bwm", "ford", "Mazda", "Tesla"};
    for(int i = 0;i < 5; i++)
    {
        std::cout << i << " = " << cars[i] << "\n";
    }
    for(std::string car: cars)// 仅限cpp,int型也可以
    {
        std::cout << car << "\n";
    }
}