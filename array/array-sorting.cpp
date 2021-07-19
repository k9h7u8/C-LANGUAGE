#include <iostream>
using namespace std;
//sorting

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
    cout<<endl;
    
    cout<<"elements before sorting\n";
    for (int i = 0; i < n; i++)
    {
    
        cout<<arr[i]<<"   ";
    }
     cout<<endl;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp;
                temp = arr[j];
                arr[j] =arr[i];
                arr[i] = temp;
            }
            
        }
        
    }
    cout<<"elements after sorting\n";
    for (int i = 0; i < n; i++)
    {
    
        cout<<arr[i]<<"   ";
    }
    

    return 0;
    
}