//modulo.cpp
#include <iostream>

int main()
{
    int input, count[42] = {0}, res = 0;

    for (int i = 0; i < 10; i++)
    {
        std::cin >> input;
        count[input%42]++;
    }

    for (int i = 0; i < 42; i++)
        if (count[i] != 0)
            res++;

    std::cout << res << std::endl;
    return 0;
}