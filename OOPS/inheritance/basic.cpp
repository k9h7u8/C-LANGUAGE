#include <iostream>
using namespace std;

//Base Class
class Employee{
    public:
    int id;
    float salary;
    Employee(int inpid){
        id=inpid;
        salary=34.8;
    }
    Employee(){}  
};
//Derived class syntax
// class {{derived-class-name}} :{{visibility-mode}} {{base-class-name}}
// {
//     class members/methods/etc...
// }
// 1. default visibility mode is private
// 2. Piblic visibility mode: public members of the base class becomes public members of the derived class
// 3. Private visibility mode: public members of the base class becomes private members of the derived class
// 4. private members are never inherited

// Creating a programmer class derived from employee Base class

class Programmer : Employee{
    public:
    int languageCode;
    Programmer(int inpid){
        id =inpid;
        languageCode = 9;
    }
    void getData(){
        cout<<id<<endl;
    }
};

int main() 
{
    Employee harry(2),rohan(6);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    Programmer s1(100);
    cout<<s1.languageCode<<endl;
    s1.getData();
    return 0;
}