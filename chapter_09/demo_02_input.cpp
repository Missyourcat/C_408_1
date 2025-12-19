#include <iostream>
#include<string>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number: ";
    while (!(cin >> number))
    { // Keep asking until the user enters a valid number
        cout << "Invalid input. Try again: ";
        cin.clear();             // Reset input errors
        cin.ignore(10000, '\n'); // 从标准输入流（通常是键盘输入）中忽略（丢弃）最多 10000 个字符，直到遇到换行符 '\n' 为止。
    }
    cout << "You entered: " << number;
    string name;
    do
    {
        cout << "Enter your name: ";
        getline(cin, name);
    } while (name.empty()); // Keep asking until the user enters something (name is not empty)
    cout << "Hello, " << name;
}