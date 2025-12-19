#include <iostream>
#include <string>
int main()
{
    std::string myText = "hello";
    std::cout << myText << std::endl;
    std::string firstName = "John ";
    std::string lastName = "Doe";
    std::string fullName = firstName + lastName;
    std::cout << fullName << std::endl;
    fullName = fullName.append(myText);// C++中的字符串实际是一个对象，所以包含了特定函数
    std::cout << fullName << fullName.length() << fullName.size() << std::endl;
    std::cout << myText[0] << myText[myText.length() - 1] << std::endl;
    myText[0] = 'H';
    myText.at(1) = 'E';
    std::cout << myText << "\n" << myText.at(myText.length() - 1);
    std::string txt = "\'\"\\sign";// 反斜杠\转义字符将特殊字符转换为字符串字符：
    std::cout << txt;
    // cin将一个空格（空白、制表符等）视为终止符,可以用getline()输入带空格的内容
    std::string FULLNAME;
    getline(std::cin, FULLNAME);
    std::cout << "name :" << FULLNAME;
    return 0;
}