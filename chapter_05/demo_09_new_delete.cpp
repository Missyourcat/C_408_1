#include <iostream>
#include <string>
int main()
{
    int *p = new int; // 为一个整数创造内存空间
    *p = 35;
    std::cout << *p << "\n"
              << p << "\n";
    delete p;
    std::cout << *p << "\n"
              << p << "\n";
    // 如果你忘记删除内存，程序仍然会运行，但随着时间推移，它可能会消耗越来越多的内存。
    // 这被称为内存泄漏，随着时间推移可能会导致程序变慢甚至崩溃。
    int numGuests;
    std::cout << "有多少个顾客?";
    std::cin >> numGuests;
    if (numGuests <= 0)
    {
        std::cout << "至少要为1\n";
        return 0;
    }
    std::string* guests = new std::string[numGuests];
    std::cin.ignore();// 忽略一次换行符号
    for (int i = 0; i < numGuests; i++)
    {
        std::cout << "输入顾客名称" << (i + 1) << ": ";
        std::getline(std::cin, guests[i]); // Read the full name (including spaces)
    }
    std::cout << "\n确认顾客:\n";
    for (int i = 0; i < numGuests; i++)
    {
        std::cout << guests[i] << "\n";// guests[i]  ≡  *(guests + i) guest[i] 是对象，不是指针
    }
    delete[] guests;//清理内存
    return 0;
}