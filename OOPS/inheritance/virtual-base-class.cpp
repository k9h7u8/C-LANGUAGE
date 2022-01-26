#include <iostream>
using namespace std;

// class B:virtual public A{}; 
// class c:virtual public A {};
class Student{
    protected:
    int rollNo;
    public:
    void setNumber(int a){
        rollNo = a;
    }
    void getNumber(void){
        cout<<"Roll No of a student is "<<rollNo<<endl;
    }
};
class Test : virtual public Student{
    protected:
    float maths, physics;
    public:
    void setMarks(float x, float y){
        maths = x;
        physics = y;
    }
    void getMarks(void){
        cout<<"Your Marks are here "<<endl
            <<"maths "<<maths<<endl
            <<"physics "<<physics<<endl;   
    }
};
class Sports : virtual public Student{
    protected:
    float score;
    public:
    void setScore(float a){
        score = a;
    }
    void getScore(void){
        cout<<"Your score is "<<score<<endl;
    }
};
class Result : public Test, public Sports{
    private:
    float total;
    public:
    void display(void){
        total = physics + maths + score;
        getNumber();
        getMarks();
        getScore();
        cout<<"Total Score is "<<total<<endl;
    }
};

int main() 
{
   Result r1;
   r1.setNumber(4);
   r1.setMarks(95, 89);
   r1.setScore(90);
   r1.display();
    return 0;
}