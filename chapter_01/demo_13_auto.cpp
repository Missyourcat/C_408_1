#include <iostream>
#include <string>
int main()
{
    auto myNum = 5;                       // int
    auto myFloatNum = 5.99f;              // float
    auto myDoubleNum = 9.98;              // double
    auto myLetter = 'D';                  // char
    auto myBoolean = true;                // bool
    auto myString = std::string("Hello"); // std::string
    // auto x;// 赋值才生效
    myNum = 6.99; // 依旧是int

    std::cout << "int: " << myNum << "\n";
    std::cout << "float: " << myFloatNum << "\n";
    std::cout << "double: " << myDoubleNum << "\n";
    std::cout << "char: " << myLetter << "\n";
    std::cout << "bool: " << myBoolean << "\n";
    std::cout << "string: " << myString << "\n";
}