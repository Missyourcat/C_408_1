#include <iostream>
#include <string>

int main()
{
    std::string letters[2][4] =
        {
            {"A", "B", "C", "D"},
            {"E", "F", "G", "H"}};
    int arry[2][2][2] =
        {
            {{1, 2},
             {3, 4}},
            {{5, 6},
             {7, 8}}};
    std::cout << letters[0][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << letters[i][j] << "\n";
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                std::cout << arry[i][j][k] << "\n";
            }
        }
    }
}