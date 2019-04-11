#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;
	if (n==1)
	{
		cout << "1" << endl;
		return 0;
	}
	n--;
	n = log2(n);
	n -= n%1;
	n += 2;
	cout << n << endl;

	return 0;
}