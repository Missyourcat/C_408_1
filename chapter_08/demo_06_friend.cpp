#include<iostream>
class Employee
{
private:
    int salary;
public:
    Employee(int s)
    {
        salary = s;
    }
    friend void displaysalary(Employee emp);

};
void displaysalary(Employee emp)
{
    std::cout << "Salary: " << emp.salary; 
}
int main()
{
    Employee myEmp(50000);
    displaysalary(myEmp);
    return 0;
}