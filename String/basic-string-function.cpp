#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "good";
    string s2 = "family";

    //to get a particular character
    cout<<s1[1]<<endl;

    //compare strings
    cout<<s2.compare(s1)<<endl;

    //length of a string
    cout<<s1.size()<<endl;
    cout<<s1.length()<<endl;

    //sub string
    string s = s1.substr(1, 3);
    cout<<s<<endl;

    //string to integer
    string str = "4567";
    int x = stoi(str);
    cout<<x + 2<<endl;

    //integer to string
    int y = 56789;
    cout<<to_string(y) + "2"<<endl;
    return 0;
}