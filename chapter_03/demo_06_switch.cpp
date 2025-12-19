#include <iostream>
int main()
{
    int day = 4;
    switch (day)
    {
    case 6:
        std::cout << "Today is Saturday";
        break;
    case 7:
        std::cout << "Today is Sunday";
        break;
    default:
        std::cout << "Looking forward to the Weekend";
    }
}