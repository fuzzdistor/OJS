#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int x,y,n;
	cin >> x >> y >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i % x == 0)
			cout << "Fizz";
		if (i % y == 0)
			cout << "Buzz";
		if (i % x && i % y)
			cout << i;
		cout << endl;
	}
	return 0;
}