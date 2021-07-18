#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n\n";
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"elements of array \n";
    
    for (int i = 0; i < n; i++)
    {
    
        cout<<arr[i]<<"   ";
    }

    return 0;

}