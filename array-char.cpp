#include <iostream>
using namespace std;
//array of character
int main() 
{
    int n;
    cout<<"enter the value of n\n";
    cin>>n;
    char arr[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}