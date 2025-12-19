#include <iostream>
enum Level
{
    Low,
    Medium,
    High
};
enum Level_2
{
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
};
enum Level_3
{
    LOW_3 = 5,
    MEDIUM_3, // Now 6
    HIGH_3    // Now 7
};
int main()
{
    enum Level myVar = Medium;
    enum Level_2 myVar_2 = MEDIUM;
    enum Level_3 myVar_3 = MEDIUM_3;

    std::cout << myVar << "\n";
    std::cout << myVar_2 << "\n";
    switch (myVar_3)
    {
    case 5:
        std::cout << "Low Level";
        break;
    case 6:
        std::cout << "Medium level";
        break;
    case 7:
        std::cout << "High level";
        break;
    }
    return 0;
}
