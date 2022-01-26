#include <iostream>
using namespace std;
/*
Case 1:
class B: public A{         both a and b have constructor
     A is executed first
};
Case 2:
class A: public B, public C{
     B is executed first then C then A
};
case 3:
class A :public B ,virtual public C{
    C is executed first then B then A
}
*/
class Base1{
    int data1;
    public:
         Base1(int a){
            data1 = a;
            cout<<"Base1 class constructor called "<<endl;

        }
        void printData1(void){
            cout<<"Value of data1 is "<<data1<<endl;
        }
};
class Base2 {
    int data2;
    public:
         Base2(int a){
            data2 = a;
            cout<<"Base2 class constructor called "<<endl;

        }
        void printData2(void){
            cout<<"Value of data2 is "<<data2<<endl;
        }
};
class Derived: public Base1, public Base2{
    int derived1, derived2;
    public:
    Derived(int a,int b, int c, int d): Base1(a),Base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructor is called "<<endl;
    }
    void printData3(void){
            cout<<"Value of derived1 is "<<derived1<<endl;
            cout<<"Value of derived2 is "<<derived2<<endl;
        }
};
int main() 
{
   Derived d1(2,3,4,5);
   d1.printData1();
   d1.printData2();
   d1.printData3();


    return 0;
}