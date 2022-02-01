#include <iostream>
#include <string>
using namespace std;

int main() 
{
    //clear function
    string str = "Good person";
    str.clear();
    cout<<str;

    //erase
    // index then no of char
    string s1 = "good";
    s1.erase(1,2); 
    cout<<s1;
   
    return 0;
}