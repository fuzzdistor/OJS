//1087.cpp
#include <iostream>

int main()
{
	int x, y, qx, qy;
	
	std::cin >> x >> y >> qx >> qy;

	while (x != 0 && y != 0 && qx != 0 && qy != 0 )
	{
		if (x == qx && y == qy)
			std::cout << 0 << std::endl;
		else if (x == qx || y == qy || x - qx == y - qy || x - qx == - y + qy)
			std::cout << 1 << std::endl;
		else
			std::cout << 2 << std::endl;

		std::cin >> x >> y >> qx >> qy;
	}

	return 0;
}