#include <iostream>
using namespace std;
int main(){
    //If 1<=n<=9, then print the lowercase English word corresponding 
    //to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9.
    int n;
    cout<<"enter the value of n:\n";
    cin>>n;
    if (n == 1)
    {
        cout<<"one";
    }
    else if (n == 2)
    {
        cout<<"two";
    }
    else if (n == 3)
    {
        cout<<"three";
    }
    else if (n == 4)
    {
        cout<<"four";
    }
    else if (n == 5)
    {
        cout<<"five";
    }
    else if (n == 6)
    {
        cout<<"six";
    }
    else if (n == 7)
    {
        cout<<"seven";
    }
    else if (n == 8)
    {
        cout<<"eight";
    }
    else if (n == 9)
    {
        cout<<"nine";
    }
    else
    {
        cout<<"greater than 9";
    }
    return 0;
}