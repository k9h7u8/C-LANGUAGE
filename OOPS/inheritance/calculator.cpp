#include <iostream>
#include <math.h>
using namespace std;

class simpleCalculator{
    protected:
    int a, b;

    public:
    void setNumber1(int, int);
    void displayOperation(void);
};
void simpleCalculator :: setNumber1(int n1, int n2){
        a = n1;
        b = n2;
    }
void simpleCalculator :: displayOperation(){
    cout<<"Sum of two number is "<<a+b<<endl;
    cout<<"Sum of two number is "<<a-b<<endl;
    cout<<"Sum of two number is "<<a*b<<endl;
    cout<<"Sum of two number is "<<a/b<<endl;
}

class scientificCalculator{
    protected:
    int a,b;

    public:
    void setNumber2(int, int);
    void displayResult();
    
};
void scientificCalculator :: setNumber2(int n1, int n2){
        a = n1;
        b = n2;
    }
void scientificCalculator:: displayResult(){
    cout<<"Value of sin(a) "<<sin(a)<<endl;
    cout<<"Value of sin(b) "<<sin(b)<<endl;
    cout<<"Value of cos(a) "<<cos(a)<<endl;
    cout<<"Value of cos(b) "<<cos(b)<<endl;
    cout<<"Value of tan(a) "<<tan(a)<<endl;
    cout<<"Value of tan(b) "<<tan(b)<<endl;
    cout<<"Value of exp(a) "<<exp(a)<<endl;
    cout<<"Value of exp(b) "<<exp(b)<<endl;
}


class hybrid: public simpleCalculator, public scientificCalculator{
    
    };


int main() 
{
    // simpleCalculator c1;
    // c1.setNumber(2,4);
    // c1.displayAdd();
    // c1.displaySub();
    // c1.displayProduct();
    // c1.displayDivision();
    
    // scientificCalculator d1;
    // d1.setNumber2(25,6);
    // d1.displayReciprocalval();
    // d1.displaySquare();
    // d1.displayCube();
    // d1.displaySqrt();
    hybrid num1;
    num1.setNumber1(2,3);
    num1.setNumber2(25,16);
    num1.displayOperation();
    num1.displayResult();
    
    return 0;
}