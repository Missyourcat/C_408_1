#include <iostream>
namespace MyNamespace
{
    int x = 42;
}
using namespace MyNamespace;
int main()
{
    // std::cout << MyNamespace::x;
    std::cout << x;
    return 0;
}