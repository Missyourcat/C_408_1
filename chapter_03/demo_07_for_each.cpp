#include <iostream>
#include <string>
int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int num : myNumbers)
    {
        std::cout << num << "\n";
    }
    std::string word = "Hello";
    for (char c : word)
    {
        std::cout << c << "\n";
    }
}