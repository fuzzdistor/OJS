//dicegame.cpp
#include <iostream>


int main()
{
    int die[8];

    for (int i = 0; i < 8; i++)
        std::cin >> die[i];

    int gMin = die[0] + die[2]
        ,gMax = die[1] + die[3]
        ,eMin = die[4] + die[6]
        ,eMax = die[5] + die[7];

    double gMedian = (gMin + gMax) / 2.0,
            eMedian = (eMin + eMax) / 2.0;


    if(gMedian > eMedian)
        std::cout << "Gunnar\n";
    if(gMedian < eMedian)
        std::cout << "Emma\n";
    if(gMedian == eMedian)
        std::cout << "Tie\n";

    return 0;
}