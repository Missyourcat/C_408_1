#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
int main()
{
    std::vector<std::string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    std::vector<std::string>::iterator it;
    it = cars.begin() + 1;
    *it = "Tesla";
    for (it = cars.begin(); it != cars.end(); it++)
    {
        std::cout << *it << "\n";
    }
    std::cout << "=========================================\n";
    // 在 C++ 11 及更高版本中，你可以使用 auto 关键字代替 明确声明并指定迭代器的类型
    // auto it = cars.begin();
    for (auto it = cars.begin(); it != cars.end(); ++it)
    {
        std::cout << *it << "\n";
    }
    std::cout << "=========================================\n";
    for (const std::string &car : cars)
    {
        std::cout << car << "\n";
    }
    std::cout << "=========================================\n";
    // 反向迭代
    for (auto it = cars.rbegin(); it != cars.rend(); ++it)
    {
        std::cout << *it << "\n";
    }

    std::cout << "=========================================\n";
    std::map<std::string, int> people = {{"John", 32}, {"Adele", 45}, {"Bo", 29}};
    for (auto it = people.begin(); it != people.end(); ++it)
    {
        std::cout << it->first << " is: " << it->second << "\n";
    }
    std::cout << "=========================================\n";
    std::sort(cars.begin(), cars.end());
    for (std::string car : cars)
    {
        std::cout << car << "\n";
    }
    std::vector<int> numbers = {1, 7, 3, 5, 9, 2};
    sort(numbers.rbegin(), numbers.rend());
    for (int num : numbers)
    {
        std::cout << num << "\n";
    }
}