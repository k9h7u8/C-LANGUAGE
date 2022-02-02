#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string s1 = "good";
    //find
    // give index no
    cout<<s1.find("ood");
    
    //insert
    s1.insert(2, "ooo");
    cout<<s1;
   
    return 0;
}