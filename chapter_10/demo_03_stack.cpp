#include <iostream>
#include <string>
#include <stack>
int main()
{
    std::stack<std::string> cars;
    if (cars.empty())
    {
        cars.push("Volvo");
        cars.push("BMW");
        cars.push("Ford");
        cars.push("Mazda");
        std::cout << cars.top() << "\n";
        cars.top() = "Tesla";
        std::cout << cars.top() << "\n";
        cars.pop();
        std::cout << cars.top() << "\n";
        std::cout << cars.size() << "\n";
    }
}
