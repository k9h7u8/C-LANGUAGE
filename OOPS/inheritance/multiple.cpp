#include <iostream>
using namespace std;

// syntax for inheriting in multiplie inheritance
//  class Derived: visibility-mode base1, visibility-mode base2
// {
//     class body of class "Derived"
// };
class Base1
{
protected:
    int baseint1;

public:
    void getBase1(int a)
    {
        baseint1 = a;
    }
};

class Base2
{
protected:
    int baseint2;

public:
    void getBase2(int b)
    {
        baseint2 = b;
    }
};

class Derived : public Base1, public Base2{
    public:
    void show(){
        cout<<"the value of base1 is "<<baseint1<<endl;
        cout<<"the value of base2 is "<<baseint2<<endl;
        cout<<"the sum of these values is "<<baseint1 + baseint2<<endl;
    }
};

// The inherited derived class will look something like this:


int main()
{
      Derived khushi;
      khushi.getBase1(21);
      khushi.getBase2(45);
      khushi.show();

    return 0;
}