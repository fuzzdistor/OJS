#include <iostream>

int main()
{
	int x[6], y[6], z[] = {1,1,2,2,2,8};
	for (int i = 0; i < 6; i++)
	{
		std::cin >> x[i];
		y[i] = z[i] - x[i];
	}

	for (int i = 0; i < 6; i++)
		std::cout << y[i] << ' ';

	std::cout << std::endl;
}