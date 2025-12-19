#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    std::vector<std::string> cars_1 = {"Volvo", "BMW", "Ford", "Mazda"};
    std::sort(cars_1.begin(), cars_1.end());
    for (const std::string &car : cars_1)
    {
        std::cout << car << "\n";
    }
    std::cout << "=========================================\n";

    std::vector<int> numbers_1 = {1, 7, 3, 5, 9, 2};
    std::sort(numbers_1.begin(), numbers_1.end());
    for (const int &num : numbers_1)
    {
        std::cout << num << "\n";
    }
    std::cout << "=========================================\n";

    std::sort(numbers_1.rbegin(), numbers_1.rend());
    for (const int &num : numbers_1)
    {
        std::cout << num << "\n";
    }
    std::cout << "=========================================\n";

    std::vector<int> numbers_2 = {1, 7, 3, 5, 9, 2};
    std::sort(numbers_2.begin() + 3, numbers_2.end());
    for (const int &num : numbers_2)
    {
        std::cout << num << "\n";
    }
    std::cout << "=========================================\n";
    auto it = find(numbers_2.begin(), numbers_2.end(), 9);
    // 如果找到，返回指向该元素的迭代器；如果没找到，返回 numbers_2.end()。
    std::cout << *it << "\n";
    std::cout << (it != numbers_2.end()) << "\n";
    std::cout << "=========================================\n";

    auto it_3 = min_element(numbers_2.begin(), numbers_2.end());
    auto it_4 = max_element(numbers_2.begin(), numbers_2.end());
    std::cout
        << *it_3 << "\n"
        << *it_4 << "\n";
    std::cout << "=========================================\n";
    std::vector<int> copiedNumber(6);
    copy(numbers_2.begin(), numbers_2.end(), copiedNumber.begin());
    for (int num : copiedNumber)
    {
        std::cout << num << "\n";
    }
    // 搜索第一个大于3的数，需要排序，否则则是从2后找
    sort(copiedNumber.begin(), copiedNumber.end());
    auto it_2 = upper_bound(copiedNumber.begin(), copiedNumber.end(), 2);
    std::cout
        << *it_2 << "\n";
    std::cout << "=========================================\n";
    std::vector<int> numbers_3(6);
    fill(numbers_3.begin(), numbers_3.end(), 35);
    for (int num : numbers_3)
    {
        std::cout << num << "\n";
    }
}