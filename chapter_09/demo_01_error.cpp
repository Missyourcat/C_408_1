#include <iostream>
using namespace std;
// try- 定义测试代码
// throw- 触发异常
// catch- 处理错误
int main()
{
    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "Access granted - you are old enough.";
        }
        else
        {
            throw(age);// 传递参数，可以throw 505
        }
    }
    catch (int myNum) //接受参数,不确定类型用 (...)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: " << myNum;
    }
}