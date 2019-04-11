#include <iostream>
#include <string>

using namespace std;

int main() {
 
    int t, e;
    string str;

	cin >> t;

    for (int i = 0; i < t; i++)
	{
		cin >> str;
		cout << str.size() << endl;
	}
    return 0;
}