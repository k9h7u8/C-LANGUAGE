#include <iostream>
using namespace std;
int main(){
     string number[] ={"","one ","two","three","four","five","six","seven","eight","nine"};

    int a,b;
    cout<<"enter the value of a:\n";
    cin>>a;
    
    cout<<"enter the value of b:\n";
    cin>>b;
    for (int i = a; i <=b; i++)
    {
        if (i<=9)
        {
            cout<<number[i]<<"";
        }
        else if (i%2 == 0)
        {
            cout<<"even"<<"";
        }
        else if  (i%2 != 0)
        {
            cout<<"odd"<<"";
        }
        
        cout<<endl;

    }
    return 0;
}
