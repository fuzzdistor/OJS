#include <iostream>
using namespace std;

int main()
{
    int t, k;
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        cin >> k;
        if (k%400 == 0)
        	cout << k/400 << '\n'; 
        else
        	cout << k/400 + 1 << '\n';
    }
    
    return 0;
}