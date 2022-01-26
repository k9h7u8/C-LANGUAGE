#include <iostream>
using namespace std;
class date
{
	int dd,mm,yyyy;
   public:
   date(int d,int m,int y) 
   {
   	dd=d;
      mm=m;
      yyyy=y;
   }
   void display(){
       
 	cout<<"Date : "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
   }  
};
int main() 
{
    int d,m,y;
   cout<<"Enter a date : ";
   cin>>d;
   cout<<"Enter a month: ";
   cin>>m;
   cout<<"Enter a year : ";
   cin>>y;
   date d1(d,m,y); 
   d1.display();
    return 0;
}