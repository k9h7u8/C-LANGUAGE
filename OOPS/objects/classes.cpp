#include <iostream>
using namespace std;
class student
{   private:
    int id;

    public:
    float marks;
    char name[30];
    void setData();
    void getData();
};
void student:: setData(){ 
    cout<<"Enter your id"<<endl;
    cin>>id;
    cout<<"Enter your marks"<<endl;
    cin>>marks;
    cout<<"Enter your name"<<endl;
    cin>>name;
}

void student::  getData(){
    cout<<"Your id is :"<<id<<endl;
    cout<<"Your marks is :"<<marks<<endl;
    cout<<"your name is :"<<name<<endl;
} 
int main() 
{
    student s1 ,s2;
    s1.setData();
    s1.getData();
    return 0;
}