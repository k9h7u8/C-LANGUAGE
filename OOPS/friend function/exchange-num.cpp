#include <iostream>
using namespace std;

class c2;
class c1{
    int val1;
    public:
    void intData(int a){
        val1 =a;
    }
    void display(void){
        cout<< val1 <<endl;
    }
    friend void exchange(c1 &,c2 &);
};

class c2{
    int val2;
    public:
    void intData(int a){
        val2 =a;
    }
    void display(void){
        cout<< val2 <<endl;
    }
    friend void exchange(c1 &,c2 &);
};
void exchange(c1 &a,c2 &b){
    int temp =a.val1;
    a.val1 = b.val2;
    b.val2 = temp;

}
int main() 
{
    c1 oa;
    oa.intData(6);
    oa.display();

    c2 ob;
    ob.intData(9);
    ob.display();
    
    exchange(oa, ob);
    cout<<"The value of c1 after exchanging becomes:";
    oa.display();
    cout<<"The value of c2 after exchanging becomes:";
    ob.display();


    return 0;
}