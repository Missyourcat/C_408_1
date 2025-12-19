#include<iostream>
#include<deque>
#include<string>
int main()
{
    std::deque<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    if(!cars.empty())
    {
        cars[0] = "Opel";
        cars.at(1) = "Mini";
        cars.push_front("Tesla");
        cars.push_back("VM");
        for(std::string car : cars)
        {
            std::cout << car << "\n";
        }
        cars.pop_front();
        cars.pop_back();
        for(int i = 0; i < cars.size(); i++)
        {
            std::cout << cars[i] + " " + cars.at(i) << std::endl;
        }
    }
}