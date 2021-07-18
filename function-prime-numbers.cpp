#include <iostream>
using namespace std;
int primenumber(int n){
    int prime = 1;
    for (int j = 2; j < n; j++)
    {
        if (n%j == 0)
        {
            prime = 0;
            break;
        }
        
    }
    
    return prime;
}
int main()
{   int a,b,prime;
    cout<<"enter the value of a and b \n";
    cin>>a>>b;
    cout<<"**********************\n ";
    for (int i = a+1; i < b; i++)
    {
        prime = primenumber(i);
        if (prime ==1)
        {
            cout<<i<<endl;
        }
        
    }
    return 0;
}