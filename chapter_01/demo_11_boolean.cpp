#include <iostream>
int main()
{
    bool myBoolean = true;
    bool isFishTasty = false;
    std::cout << "bool:" << myBoolean << "\nbool:" << isFishTasty;
    std::cout << std::boolalpha << std::endl;
    std::cout << "bool:" << myBoolean << "\nbool:" << isFishTasty;
    std::cout << std::noboolalpha << std::endl;
    std::cout << "bool:" << myBoolean << "\nbool:" << isFishTasty;
    return 0;
}