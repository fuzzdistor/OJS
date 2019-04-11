#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	int x[3], y[3];
	std::string str;

	std::cin >> x[0] >> x[1] >> x[2] >> str;

	std::sort(x, x + 3);

	y[0] = str[0] - 65;
	y[1] = str[1] - 65;
	y[2] = str[2] - 65;
	
	std::cout << x[y[0]] << ' ' << x[y[1]] << ' ' << x[y[2]] << '\n';
	return 0;
}