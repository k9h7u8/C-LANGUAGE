#include <iostream>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"how are you"<<endl;
    }
};
class Base2{
    public:
    void greet(){
        cout<<"Kase ho"<<endl;
    }
};

class Derived : public Base1, public Base2{
    int a;
    public:
    void greet(){
        Base1::greet();
    }
};

class B{
    public:
    void say(){
        cout<<"Hello World"<<endl;
    }
};
class D: public B{
    int a;
    public:
    void say(){
        cout<<"Hello World and mom"<<endl; //htis one is printed when say function is called from D class
    }
};
int main() 
{
    //ambiguity1
    // Base1 b1obj;
    // Base2 b2obj;
    // b1obj.greet();
    // b2obj.greet();
    // Derived d1;
    // d1.greet();

    //Ambiguity2
    B b1;
    b1.say();
    D d1;
    d1.say();



    return 0;
}