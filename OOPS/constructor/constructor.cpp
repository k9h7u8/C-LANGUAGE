#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    // constructor------is a special member function with the same name as of the class.
    // it is used to initalize the object of the class
    //it is automatically invoked whenever object is created
    complex(void);             //constructor declaration
    void printNumber()
    {
        cout << "your number is: " << a << " + " << b << "i" << endl;
    }
};
complex::complex(void)        //default constructor as it acepts no parameter
{
    a =0;
    b =0 ;
    cout<<"Hello world"<<endl;
}
int main()
{
    complex c1, c2;
    c1.printNumber();
    c2.printNumber();

    return 0;
}

//characteristic of constructor:
//1 declared in public section of the class
//2 automatically invoked whenever object is created
//3 do not have return type and do not reurn value
//4 have default arguments
//5 we can not refer to the address
