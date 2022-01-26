#include <iostream>
using namespace std;

class Person // class always have default private context
{

public:
    string Address;
    int age;
    int salary;
    char gender;
    void display();     //prototype
};

int main()
{
    Person jass, Khushi, Kirtika, Kamal, komal;
    jass.Address = "Sangrur";
    jass.age = 19;
    jass.salary = 45333;
    jass.gender = 'M';

    Khushi.Address = "Ludhiana";
    Khushi.age = 19;
    Khushi.salary = 463132;
    Khushi.gender = 'F';

    Kirtika.Address = "Ludhiana";
    Kirtika.age = 20;
    Kirtika.salary = 52654;
    Kirtika.gender = 'F';

    Kamal.Address = "Ludhiana";
    Kamal.age = 19;
    Kamal.salary = 56323232;
    Kamal.gender = 'M';

    komal.Address = "Jammu";
    komal.age = 19;
    komal.salary = 3232222;
    komal.gender = 'F';

    komal.display();
    cout<<endl;
    Kamal.display();
    cout<<endl;
    Kirtika.display();
    cout<<endl;
    jass.display();

    return 0;
}

void Person::display()
{
    cout << Address << endl;
    cout << age << endl;
    cout << salary << endl;
    cout << gender << endl;
}