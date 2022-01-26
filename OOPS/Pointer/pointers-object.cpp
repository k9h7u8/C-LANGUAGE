#include <iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};
int main() 
{
    complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;
    // (*ptr).setData(2,9);         //is exactly same as
    ptr->setData(2,9);              //pointer dereference
    // (*ptr).getData();
    ptr->getData(); 

    return 0;
}