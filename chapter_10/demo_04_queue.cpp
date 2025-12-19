#include <iostream>
#include <string>
#include <queue>
int main()
{
    std::queue<std::string> cars;
    if (cars.empty())
    {
        cars.push("Volvo");
        cars.push("BMW");
        cars.push("Ford");
        cars.push("Mazda");
        std::cout << cars.front() + " " + cars.back() << std::endl;
        cars.front() = "Telsa";
        cars.back() = "VM";
        std::cout << cars.front() + " " + cars.back() << std::endl;
        cars.pop();
        std::cout << cars.front() + " " << (cars.size()) << std::endl;
    }
}