#include <iostream>
using namespace std;

class employee{
    int id;
    int salary;

    public:
    void setId(void){
        cout<<"Enter the Id : "<<endl;
        cin>>id;
        salary=1000;
    }
    void getId(void){
        cout<<"The Id is : "<<id<<endl;
    }
};
int main() 
{
    // employee e1,e2,e3;
    // e1.setId();
    // e1.getId();
    employee fb[4];
    for (int i = 0; i < 4; i++)
    {
    fb[i].setId();
    fb[i].getId();
    }
    
    return 0;
}