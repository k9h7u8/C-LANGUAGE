#include <iostream>
using namespace std;

int main(){
    int r,c;
    cout<<"enter the value of row and column\n";
    cin>>r>>c;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
    int key;
    cout<<"enter key\n";
    cin>>key;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (key == arr[i][j])
            {
                cout<<i<<" "<<j;
            }
            
        }
       
    }
    return 0 ;
    
} 