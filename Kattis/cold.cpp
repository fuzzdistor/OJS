#include <iostream>

int main()
{
	int n, t, c;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> t;
		if (t < 0)
			c++;
	}
	std::cout << c << std::endl;
    return 0;
}