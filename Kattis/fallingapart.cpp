#include <iostream>
#include <algorithm>

using namespace std;

int main() {
 
    int t;
	cin >> t;
	int n[t];
    for (int i = 0; i < t; i++)
    	cin >> n[i];
    
    sort(n, n+t);

    int a = 0, b = 0;

    for (int i = t-1; i >= 0; i-=2)
    {
		a += n[i];
		b += n[i-1];
    }

    cout << a << ' ' << b << endl;
    return 0;
}