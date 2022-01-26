#include <iostream>
using namespace std;
/*
Syntax for initalization list:
constructor (argument list) :initilization-section
{
    assignment + other code
}
*/
class Test{
    int a, b;
    public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) :  b(j),a(i + b)
      // ----->this will create problem because a is initialized
    
    Test(int i, int j) : a(i)
    {
        b = j;
        cout<<a<<" "<<b <<endl;
        cout<<"Constructor executed"<<endl;
    }
};

int main() 
{
    Test t(7,8);
    return 0;
}