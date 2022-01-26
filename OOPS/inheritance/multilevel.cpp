#include <iostream>
using namespace std;

class student{
    protected:
    int rollNo;
    public:
    void setrollNumber(int);
    void getrollNumber(void);
};
void student :: setrollNumber(int r){
    rollNo = r;
}
void student :: getrollNumber(){
    cout<<"The roll no is "<<rollNo<<endl;  
}

class Exam : public student{
    protected:
    float maths;
    float physics;
    public:
    void setMarks(float , float);
    void getMarks(void);
};
void Exam :: setMarks(float m1, float p1){
    maths = m1;
    physics = p1;
}
void Exam :: getMarks(){
   cout<<"The marks obtained in maths are "<<maths<<endl;
   cout<<"The marks obtained in maths are "<<physics<<endl;
}

class result : public Exam{
    float percentage;
    public:
    void display(){
        getrollNumber();
        getMarks();
        cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
    }
};
int main() 
{
    result harry;
    harry.setrollNumber(789);
    harry.setMarks(85,95);
    harry.display();

    return 0;
}