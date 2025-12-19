#include <iostream>
#include <functional>
// lambda函数是一个小型、匿名的函数，你可以直接写在代码中。当你需要快速调用函数但又不需要命名或单独声明时，它非常有用。
void myFunction(std::function<void()> func)
{
    // 也可以把一个λ函数作为参数传递给另一个函数
    func();
    func();
}
int main()
{
    auto message = []()
    {
        std::cout << "Hello World!\n";
    };
    message();
    auto add = [](int a, int b)
    {
        return a + b;
    };
    std::cout << add(3, 4);
    myFunction(message);
    for (int i = 1; i <= 3; i++)
    {
        auto show = [i]()
        {
            std::cout << "Number: " << i << "\n";
        };
        show();
    }
    int x = 10;

    // auto show = [x]()// 创建的是副本，不是x本身，如果要控制x，则需要加入&
    auto show = [&x]() 
    {
        std::cout << x;
    };

    x = 20; 

    show();

    return 0;
}