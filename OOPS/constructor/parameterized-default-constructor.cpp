#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
complex(int ,int);
    void printNumber()
    {
        cout << "your number is: " << a << " + " << b << "i" << endl;
    }
};
complex::complex(int x,int y)        //parameterized constructor
{
    a = x;
    b = y ;

}
int main() 
{
    //implicit call
    complex a(4,6);
    a.printNumber();

    //explicit call
    complex b =complex(5,7);
    b.printNumber();
    return 0;
}