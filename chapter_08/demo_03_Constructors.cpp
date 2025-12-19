#include <iostream>
#include <string>
class Myclass_1
{
public:
    Myclass_1()
    {
        std::cout << "Hello World!\n";
    }
};
// 构造子与该类同名。
// 它没有返回类型（甚至没有void）。
// 通常声明为公开。
// 当创建对象时会自动调用它。
class Car_1
{
public:
    std::string brand;
    std::string model;
    int year;
    Car_1(std::string x, std::string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }
};
class Car_2
{
public:
    std::string brand;
    std::string model;
    int year;
    Car_2(std::string x, std::string y, int z);
};
Car_2::Car_2(std::string x, std::string y, int z)
{
    brand = x;
    model = y;
    year = z;
};
class Car_3
{
public:
    std::string brand;
    std::string model;

    Car_3()
    {
        brand = "Unknown";
        model = "Unknown";
    }

    Car_3(std::string b, std::string m)
    {
        brand = b;
        model = m;
    }
};

int main()
{
    Myclass_1 myObj_1;
    Car_1 carObj_1("BWM", "X5", 1999);
    std::cout << carObj_1.brand << " " << carObj_1.model << " " << carObj_1.year << "\n";
    Car_2 carObj_2("Ford", "Mustang", 1969);
    std::cout << carObj_2.brand << " " << carObj_2.model << " " << carObj_2.year << "\n";
    Car_3 car1;
    Car_3 car2("BMW", "X5");
    Car_3 car3("Ford", "Mustang");

    std::cout << "Car1: " << car1.brand << " " << car1.model << "\n";
    std::cout << "Car2: " << car2.brand << " " << car2.model << "\n";
    std::cout << "Car3: " << car3.brand << " " << car3.model;
    return 0;
}