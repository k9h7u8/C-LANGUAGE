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
     int num;
     cout<<"enter the value of number\n";
     cin>>num;
     cout<<factorial(num)<<endl;
    return 0;

}




































































