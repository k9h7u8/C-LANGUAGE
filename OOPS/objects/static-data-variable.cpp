#include <iostream>
using namespace std;

class employee{
    int id;
    static int count;           //static data members//
    
    public:
    void setData(void){
        cout<<"Enter the Id"<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The ID is:"<<id<<"and this is employee no: "<<count<<endl;   
    }
    static void getCount(void){
        cout<<"the value of count is :"<<count<<endl;
    }
};

int employee:: count=100;       // now count start from 100 //
int main() 
{
    employee khushi,khush,kirti;
    khushi.setData();
    khushi.getData();
    employee::getCount();

    khush.setData();
    khush.getData();
    employee::getCount();

    kirti.setData();
    kirti.getData();
    employee::getCount();
    return 0;
}