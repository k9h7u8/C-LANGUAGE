#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    void getData(void)
    {
        cout << "The value of a is " << endl;
    }
};
int main()
{
    // this - is a keyword which pointer which points to the object which invokes the member function
    A a;
    a.setData(9);
    a.getData();
    return 0;
}