#include <iostream>
using namespace std;
int table(int a ,int b){
    for (int i = a; i <=b; i++)
    {
        for (int j = 1; j <=10; j++)
        {
            cout<<i<<"x"<<j<<"="<<i*j<<endl;
        }
        cout<<endl;
    }
    return 0;
}
int main(){
    int a ,b;
    cout<<"enter the values of a and b\n";
    cin>>a>>b;
    cout<<table(a,b);

    return 0;

}