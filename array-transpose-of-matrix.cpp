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
    cout<<"matrix : \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"transpose of matrix: \n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }


    return 0 ;

}