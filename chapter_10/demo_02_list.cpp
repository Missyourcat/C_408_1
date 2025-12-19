#include <iostream>
#include <string>
#include <list>
int main()
{
    std::list<std::string> cars = {"Volvo", "Bmw", "Ford", "Mazda"};
    if (!cars.empty())
    {
        cars.front() = "Opel";
        cars.back() = "Toyota";
        cars.push_front("Tesla");
        cars.push_back("WM");
        for (std::string car : cars)
        {
            std::cout << car << "\n";
        }
        cars.pop_front();
        cars.pop_back();
        std::cout << cars.front() + " " + cars.back() + " " << cars.size() << std::endl;
    }
}