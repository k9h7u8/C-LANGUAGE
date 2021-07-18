#include <iostream>
using namespace std;
int factorial(int n)
{
int fact =1;
for (int i = 1; i <= n; i++)
{
    fact = fact * i;
}
    return fact;
}
int main()
{
     int n,r;
     cout<<"enter the value of n and r\n";
     cin>>n>>r;
     int result = factorial(n)/(factorial(n-r)*factorial(r));
     cout<<result<<endl;
    return 0;
}
