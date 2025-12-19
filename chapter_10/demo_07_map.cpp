#include <iostream>
#include <map>
#include <string>
int main()
{
    // 会自动排序
    std::map<std::string, int> people = {{"john", 32}, {"Adele", 24}, {"Bo", 29}};
    if (!people.empty())
    {
        for (auto person : people)
        {
            std::cout << person.first << ", " << person.second << "\n";
        }
        std::cout << "Adele is: " << people["Adele"] << "\n";
        people["Adele"] = 50;
        people.at("Bo") = 0;
        std::cout << "Adele is: " << people.at("Adele") << "\n";
        std::cout << "Bo is: " << people.at("Bo") << "\n";
        // 新增数据
        people["Jenny"] = 22;
        people.insert({"Liam", 24});
        people.insert({"Liam", 23}); // 只保留第一次
        people.erase("john");
        for (auto person : people)
        {
            std::cout << person.first << ", " << person.second << "\n";
        }
        std::cout << people.count("john") << " " << people.count("Liam") << "\n";
        people.clear();
        std::cout << people.size();
    }
}