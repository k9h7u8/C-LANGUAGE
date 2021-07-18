#include <iostream>
using namespace std;

int maxmin(int arr[], int n){
    int max= arr[0];        // temporary // 5
    int min = arr[1];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
        
    }
    return max;
}


int main() 
{
    int n;              // number of elements
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];


    for (int i = 0; i < n; i++)
    {
        // cout<<"Enter the value "<<i<<" ";
        cin>>arr[i];
    }
    

    cout<<maxmin(arr,n);
    return 0;
}