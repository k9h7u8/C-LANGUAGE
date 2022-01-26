#include <iostream>
using namespace std;

//forward declaration
// class complex;
// class calculator{
//     public:
//     int add(int a, int b){
//         return (a+b);
//     }
//     int sumRealComplex(complex , complex);
//     int sumImgComplex(complex , complex);

// };
class complex{ 
    int a ,b;
    //individually declaring functions as friends
    // friend int calculator :: sumRealComplex(complex o1, complex o2);
    // friend int calculator :: sumImgComplex(complex o1, complex o2);

    //declaring the entier calculator class as friend
    friend class calculator;
    public:
    void setNumber(int n1,int n2){
        a = n1;
        b = n2;
    }
    void printNumber(){
        cout<<"your number is: "<<a<<" + "<<b<<"i"<<endl;
    }
   
};
class calculator{
    public:
    int add(int a, int b){
        return (a+b);
    }
    // int sumRealComplex(complex , complex);
    int sumRealComplex(complex o1, complex o2){
        return (o1.a + o2.a);
    }

    int sumImgComplex(complex , complex);

};

// int calculator :: sumRealComplex(complex o1, complex o2){
//         return (o1.a + o2.a);
//     }

int calculator :: sumImgComplex(complex o1, complex o2){
        return (o1.b + o2.b);
    }   

int main() 
{
    complex o1,o2;
    o1.setNumber(3,4);
    o2.setNumber(6,7);
    calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    cout<<"the sum of real part of o1 and o2 is "<<res<<endl;
    int resi = calc.sumImgComplex(o1,o2);
    cout<<"the sum of real part of o1 and o2 is "<<resi<<endl;

    return 0;
}