#include <iostream>
#include <string>
using namespace std;

int main() 
{
    // append function
    string s1 = "good";
    string s2 = "family";
    s1.append(s2);
    cout << s1 << endl;

    // s1 = s1 + s2;
    // cout << s1 << endl;
    return 0;
}