#include <iostream>
#include <set>
int main()
{
    // 会自动排序,且重复的元素会自动忽略
    std::set<std::string> cars = {"Volvo", "BMW", "BMW", "Mazda"};
    if (!cars.empty())
    {
        cars.insert("Tesla");
        cars.insert("VW");
        cars.insert("Toyota");
        cars.insert("Audi");
        for (std::string car : cars)
        {
            std::cout << car << "\n";
        }
        cars.erase("BMW");
        for (std::string car : cars)
        {
            std::cout << car << "\n";
        }
        cars.clear();
        std::cout << cars.size() << std::endl;
        for (std::string car : cars)
        {
            std::cout << car << "\n";
        }
    }
    // greater降序
    std::set<int, std::greater<int>> numbers = {7, 1, 2, 2, 9};
    for (int num : numbers)
    {
        std::cout << num << "\n";
    }
}