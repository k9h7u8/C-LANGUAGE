#include <iostream>
using namespace std;
//matrix searching
int main() 
{
    int r,c;
    cout<<"enter the value of row and column\n";
    cin>>r>>c;
    int key;
    cout<<"enter the value of key\n";
    cin>>key;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>arr[i][j];
        }
    }
    bool result = false;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           if (arr[i][j] == key)
               result = true;
         }
    }
    if (result)
    cout<<"element is present";
    else
    cout<<"element is absent";
    return 0;
}