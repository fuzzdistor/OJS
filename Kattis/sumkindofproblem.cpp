//sumkindofproblem.cpp
#include <iostream>

int main()
{
    int cases, k;

    std::cin >> cases;

    for (int i = 0; i < cases; i++)
    {
        std::cin >> k >> k;

        unsigned long res = (k * (k+1))/2;

        std::cout << i+1 << ' ' << res << ' ' << res*2 - k << ' ' << res*2 << std::endl;
    }
    return 0;
}