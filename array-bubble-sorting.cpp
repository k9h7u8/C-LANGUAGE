#include <iostream>
using namespace std;
//bubble sorting
int main(){
    int n;
        cout<<"enter the value of n\n";
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];

        }
        int counter =1;
        while (counter <n)
        {
            for (int j = 0; j < n - counter; j++)
            {
                if (arr[j]> arr[j+1])
                {
                    int temp;
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
                
            }
            counter ++;
        }
        for (int i = 0; i < n; i++)
        {
            
            cout<<arr[i]<<"   ";
            
        }
    return 0;
}