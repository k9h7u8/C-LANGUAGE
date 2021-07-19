#include <iostream>
using namespace std;
int main()
{
    int rows, column;
    cout<<"enter the values of row and column\n";
    cin>>rows>>column;
    for (int i = 1; i <=rows; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            if (i==1 || i==rows ||j ==1 || j==column )
            {
                cout<<"*";

            }
            
            else{
                cout<<" ";
            }
            //cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}