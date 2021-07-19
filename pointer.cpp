#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() 
{
    int a =4,b=8;
    cout<<"the value of a and b before swapping = "<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<"the value of a and b after swapping = "<<a<<" "<<b<<endl;
    return 0;
}



