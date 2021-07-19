#include <iostream>
using namespace std;
int linearseach(int arr[],int n ,int key){
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
    return -1;
    
}
int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];

    }
    int key;
    cout<<"enter key";
    cin>>key;
    cout<<linearseach(arr,n,key);

    return 0;
}
