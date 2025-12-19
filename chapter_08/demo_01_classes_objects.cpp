#include <iostream>

class MyClass
{
public: // 访问指定符，指定类的成员（属性和方法）可从类外部访问。
    int myNum;
    std::string myString;
};
class Car
{
public:
    std::string brand;
    std::string model;
    int year;
};

int main()
{
    MyClass myObj;
    myObj.myNum = 15;
    myObj.myString = "Some text";
    std::cout << myObj.myNum << "\n";
    std::cout << myObj.myString << "\n";
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    // Create another object of Car
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    // Print attribute values
    std::cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    std::cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
}