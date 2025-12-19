#include<iostream>
class Myclass_1
{
public:
    void myMethod(){
        std::cout << "hello world!\n";
    }
};
class Myclass_2
{
public:
    void myMethod();
};
void Myclass_2::myMethod()
{
    std::cout << "hello world1\n";
};
class Car
{
public:
    int speed(int maxSpeed); 
};
int Car::speed(int maxSpeed)
{
    return maxSpeed;
}
int main()
{
    Myclass_1 myobj;
    myobj.myMethod();
    Myclass_2 myobj_2;
    myobj_2.myMethod();
    Car myobj_3;
    std::cout << myobj_3.speed(200);
    return 0;
}