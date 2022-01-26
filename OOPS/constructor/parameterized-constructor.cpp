#include <iostream>
using namespace std;

class point{
    int a,b;
    public:
    point (int x,int y){
        a = x;
        b = y;
    }
    void displayPoint(){
        cout<<"The point is ("<<a<< "," <<b<<")"<<endl;
    }
};
int main() 
{
    point p1(8,9);
    point p2(5,3);
    p1.displayPoint();
    p2.displayPoint();
    return 0;
}