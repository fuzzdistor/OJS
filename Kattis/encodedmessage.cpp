//encodedmessage.cpp
#include <iostream>
#include <string>
#include <cmath>

int main()
{
    int cant;
    std::string input;
    std::cin >> cant;

    while (cant > 0)
    {
        std::cin >> input;
        int rango = sqrt(input.size());
        std::string output;
        for (int i = 1; i <= rango; i++)
            for (int j = rango - i; j < input.size(); j += rango)
                output.push_back(input.at(j));

        std::cout << output << '\n';
        cant--;
    }
    return 0;
}