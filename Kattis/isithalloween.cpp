#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str;
    getline(cin, str);
    if (str == "OCT 31" || str == "DEC 25")
        cout << "yup";
    else
        cout << "nope";
        
    return 0;
}