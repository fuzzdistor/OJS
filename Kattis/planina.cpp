#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;

int main() {
 
    int t;
    long r;
    cin >> t;

    r = pow(2,t) + 1;

    cout << fixed << setprecision(0) << pow(r,2) << '\n';

    return 0;
}