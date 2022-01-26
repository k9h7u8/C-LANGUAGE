#include <iostream>
#include <math.h>
using namespace std;

class point{
    int a,b;
    public:
    point (int x,int y){
        a = x;
        b = y;
    } 
   friend point distanePoint(point o1,point o2);
};
point distanePoint(point o1,point o2){
   int diff1 = o2.a - o1.a;
   int diff2 = o2.b - o1.b;
   float result = sqrt((diff1*diff1) + (diff2*diff2));
   cout<<"distance between two points is "<<result<<endl;
};
int main() 
{
    point p1(1,0);
    point p2(70,0);

    distanePoint(p1,p2);
    return 0;
}