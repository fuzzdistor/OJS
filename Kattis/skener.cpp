//skener.cpp
#include <iostream>
#include <string>

int main()
{
    int rows, columns, scalex, scaley;

    std::cin >> rows >> columns >> scaley >> scalex;

    std::string line;

    for (int i = 0; i < rows; i++)
    {
        std::cin >> line;
        for (int y = 0; y < scaley; y++)
        {
            for (int j = 0; j < columns; j++)
            {
                for (int x = 0; x < scalex; x++)
                    std::cout << line[j];
            }
            std::cout << std::endl;
        }
    }
   
    return 0;
}