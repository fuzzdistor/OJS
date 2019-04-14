//different.cpp
#include <iostream>
#include <string>


int main()
{
    long long n1, n2, res;

    while (std::cin >> n1 >> n2)
    {
        res = n1 - n2;
        if (res < 0)
            res = -res;

        std::cout << res << std::endl;
    }

    return 0;
}