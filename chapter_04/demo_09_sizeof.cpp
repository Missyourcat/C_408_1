#include <iostream>
int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    std::cout << sizeof(myNumbers) << "\n";
    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    std::cout << getArrayLength << "\n";
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    std::cout << sizeof(myInt) << "\n";    // 4 bytes (typically)
    std::cout << sizeof(myFloat) << "\n";  // 4 bytes
    std::cout << sizeof(myDouble) << "\n"; // 8 bytes
    std::cout << sizeof(myChar) << "\n";   // 1 byte
}