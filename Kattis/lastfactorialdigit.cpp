#include <iostream>

int main()
{
	// 1,2,6,4,0,0,0,0,0

	int n, f, r;

	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> f;
		if (f == 3) r = 6;
		else if (f < 5) r = f;
		else r = 0;

		std::cout << r << '\n';
	}

    return 0;
}