#include <iostream>
#include <vector>
#include <string>

int main()
{
   	std::string name;
   	int n = 1;
   	int cant;
    std::cin >> cant;

    while (cant > 0)
    {
    	std::vector<std::string> input;
    	for (int i = 0; i < cant; i++)
    	{
    		std::cin >> name;
    		input.push_back(name);
    	}

    	std::cout << "SET " << n << '\n';
    	for (int i = 0; i < cant; i+= 2)
        	std::cout << input.at(i) << '\n';

        int fin = cant-1;

        if (cant%2) fin-= 1;

    	for (int i = fin; i > 0; i-= 2)
        	std::cout << input.at(i) << '\n';

        n += 1;
	    std::cin >> cant;
    }
    return 0;
}