#include<iostream>
#include<fstream>
int main()
{
    std::ofstream Myfile("filename.txt");
    Myfile << "写入文件";
    Myfile.close();
    std::string myText;
    std::ifstream MyReadFile("filename.txt");
    while(getline(MyReadFile, myText))
    {
        std::cout << myText;
    }
    MyReadFile.close();
}