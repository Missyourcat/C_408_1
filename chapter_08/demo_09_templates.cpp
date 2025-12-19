#include <iostream>
#include <string>
template <typename T>
T add(T a, T b)
{
    return a + b;
}
template <typename T>
class Box
{
public:
    T value;
    Box(T v)
    {
        value = v;
    }
    void show()
    {
        std::cout << "Value: " << value << "\n";
    }
};
template <typename T1, typename T2>
class Pair
{
public:
    T1 first;
    T2 second;
    Pair(T1 a, T2 b)
    {
        first = a;
        second = b;
    }
    void display()
    {
        std::cout << "First: " << first << ", Second: " << second << "\n";
    }
};
int main()
{
    std::cout << add<int>(5, 3) << "\n";
    std::cout << add<double>(2.5, 1.5) << "\n";
    Box<int> intBox(50);
    Box<std::string> strBox("hello");
    intBox.show();
    strBox.show();
    Pair<std::string, int> person("John", 30);
    Pair<int, double> score(51, 9.5);
    person.display();
    score.display();
    return 0;
}