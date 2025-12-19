#include <iostream>
#include <vector>
int main()
{
    std::vector<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    if (!cars.empty())
    {
        cars.push_back("Mini");
        for (std::string car : cars)
        {
            std::cout << car << "\n";
        }
        cars[0] = "Opel";
        cars.at(1) = "su7";
        cars.pop_back();
        for (int i = 0; i < cars.size(); i++)
        {
            std::cout << cars[i] << "\n";
            std::cout << cars.at(i) << "\n";
        }
        std::cout << cars.front() + "\n" + cars.back() << std::endl;
    }
}