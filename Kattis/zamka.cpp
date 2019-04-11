//```
#include <iostream>
 
using namespace std;

int sumaDigitos(int p)
{
	int r = 0;
	do
	{
		r += p % 10;
		p /= 10;
	} while (p != 0);
	return r;
}
 
int main() {
 
    int l, d, x;
    cin >> l >> d >> x;

    int n = l;
    int m = d;

    while (sumaDigitos(n) != x)
    	n++;

    while (sumaDigitos(m) != x)
    	m--;
    
    cout << n << '\n' << m << endl;

    return 0;
}


