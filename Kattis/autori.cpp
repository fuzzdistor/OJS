#include <iostream>
#include <string>

int main()
{
	std::string str;
	std::cin >> str;
	for (char cha : str)
		if (cha > 64 && cha < 91) std::cout << cha;

	return 0;
}