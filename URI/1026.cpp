//1087.cpp
#include <iostream>
#include <cmath>

void bitConverter(int n, int (&a)[32], int index = 0)
{
	if(n != 1)
	{
		a[index] = n % 2;
		bitConverter(n / 2, a, index+1);
		return;
	} 
	a[index] = true;
	return;
}

int decConverter(int (&a)[32], int index = 32)
{
	int res;
	if (index != 0)
	{
		res = decConverter(a, index - 1);
		if(a[index] != 0)
			res += pow(2, index);
		return res;
	}
	return a[0];
}

void weirdBitSum(int (&a)[32], int (&b)[32], int (&c)[32])
{
	for(int i = 0; i < 32; i++)
		if(a[i] != b[i])
			c[i] = 1;
}

int main()
{

	int a[32] = {0}, b[32] = {0}, c[32] = {0};
	int n, m;

	while(std::cin >> n >> m)
	{
		bitConverter(n, a);
		bitConverter(m, b);
		weirdBitSum(a, b, c);

		std::cout << decConverter(c) << std::endl;
	}
	
	return 0;
}