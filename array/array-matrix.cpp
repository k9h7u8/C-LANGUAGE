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
            cout<< "elememts at x["<<i<<"] ["<<j<<"] = "  <<arr[i][j]<<endl;
        }
        cout<<endl;
    }


    return 0 ;

}