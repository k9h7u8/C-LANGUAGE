#include <iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void intCounter(void){
        counter =0;
    }
    void setPrice(void);
    void getPrice(void);
};
void shop::setPrice(void){
    cout<<"Enter the Id oy your item no"<< counter+1 <<endl;
    cin>>itemId[counter];
    cout<<"Enter the Price oy your item "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop::getPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The Price of item with id"<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }  
}
int main() 
{
    shop s1;
    s1.intCounter();
    s1.setPrice();
    s1.setPrice();
    s1.setPrice();
    s1.getPrice();

    return 0;
}