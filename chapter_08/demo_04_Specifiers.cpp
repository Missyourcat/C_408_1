#include <iostream>
class Base
{
private:
    int a; // 只有 Base 内部能访问
protected:
    int b; // Base 和派生类能访问
public:
    int c; // 任何地方都能访问
};

class Derived : public Base
{
public:
    void test()
    {
        // a = 1;  // ❌ 错误：不能访问 private 成员
        b = 2; // ✅ 正确：可以访问 protected 成员
        c = 3; // ✅ 正确：可以访问 public 成员
    }
};

int main()
{
    Derived d;
    // d.a = 1; // ❌ 错误
    // d.b = 2; // ❌ 错误（即使 b 是 protected，在类外也不能访问）
    d.c = 3; // ✅ 正确
}