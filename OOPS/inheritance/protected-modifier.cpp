#include <iostream>
using namespace std;

class Base{
    protected:   //private but inherited
    int a;
    private:     //private but do not inherited
    int b;

};

//for protected member :
//                          public derived        private derived       protected derived
// 1 private member -           not inherited        not inherited        not inherited
// 2 protected member -          protected           private                protected
// 3 public member -             public              private                 protected

class Derived : protected Base{     //protected mode is also there

};
int main() 
{
    Base b;
    Derived d;
    //will not work because a is protected in both classes
    // cout<<b.a;
    // cout<<d.a;
    
    return 0;
}