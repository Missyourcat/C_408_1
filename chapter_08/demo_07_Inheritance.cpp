#include <iostream>
#include <string>
class Vehicle
{
public:
    std::string brand = "ford";
    void honk()
    {
        std::cout << "Tuut, tuut!";
    }
};
class Car : public Vehicle
{
public:
    std::string model = "Mustang";
};
class MyClass
{
public:
    void myFunction()
    {
        std::cout << "oioio" << "\n";
    }
};
class MyChild : public MyClass
{
};
class MyGrandChild : public MyChild
{
};
class MyotherClass
{
public:
    void myOtherFunction()
    {
        std::cout << "wbwbwbwbwb" << "\n";
    }
};
class MyChildClass : public MyClass, public MyotherClass
{
};
class Employee
{
protected:
    int salary;
};
class Programmer : public Employee
{
public:
    int bonus;
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};
int main()
{
    Car myCar;
    myCar.honk();
    std::cout << myCar.brand + " " + myCar.model + "\n";
    MyGrandChild myObj;
    myObj.myFunction();
    MyChildClass myOBJ_2;
    myOBJ_2.myFunction();
    myOBJ_2.myOtherFunction();
    Programmer no;
    no.setSalary(15000);
    no.bonus = 2500;
    std::cout << "Salary: " << no.getSalary() << "\n";
    std::cout << "Bonus: " << no.bonus << "\n";
    return 0;
}