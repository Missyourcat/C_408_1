#include<iostream>
class Employee
{
private:
    int salary;
public:
    void setSalary(int s)
    {
        salary = s;
    };
    int getSalary()
    {
        return salary;
    };
};
int main()
{
    Employee myObj;
    myObj.setSalary(50000);
    std::cout << myObj.getSalary();
    return 0;
}