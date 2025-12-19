#include<iostream>
class Animal
{
public:
    void animalSound()
    {
        std::cout << "动物发出叫声！\n";
    }
    virtual void sound()
    {//虚拟函数是基类中的成员函数，可以在派生类中被覆盖。
        std::cout << "动物叫声\n";
    }
};
class Pig : public Animal
{
public:
    void animalSound()
    {
        std::cout << "小猪叫：你好，我是佩奇！\n";
    }
};
class Dog : public Animal
{
public:
    void animalSound()
    {
        std::cout << "小狗：芜湖\n";

    }
    void sound() override
    {
        std::cout << "犬吠\n";
    }
};
int main()
{
    Animal myAnimal;
    Pig myPig;
    Dog myDog;
    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    Animal* a;
    a = &myDog;
    a->animalSound();
    a->sound();// (*a).sound();
    return 0;
}