#include<iostream>
#include<string.h>

using namespace std;

class bank
{
        int acno;
        char nm[100];
        float bal;  
   public:
        bank(int accNo, char *name , float balance)  
        {
                acno=accNo;
                strcpy(nm, name);
                bal=balance;
        }
        void deposit();
        void withdraw();
        void display();
};
void bank::deposit()   
{
        float damt;
        cout<<"\n Enter Deposit Amount = ";
        cin>>damt;
        bal+=damt;
}
void bank::withdraw() 
{
        float wamt;
        cout<<"\n Enter Withdraw Amount = ";
        cin>>wamt;
        if(wamt>bal)
                cout<<"\n Cannot Withdraw Amount";
        bal-=wamt;
}
void bank::display()
{
        cout<<"\n ----------------------";
        cout<<"\n Accout No. : "<<acno;
        cout<<"\n Name : "<<nm;
        cout<<"\n Balance : "<<bal;  
}
int main()
{
        int accNo;
        char name[100];
        float balance;
        cout<<"\n Enter Details: \n";
        cout<<"-----------------------";
        cout<<"\n Accout No. ";
        cin>>accNo;
        cout<<"\n Name : ";
        cin>>name;
        cout<<"\n Balance : ";
        cin>>balance;
  
        bank b1(accNo, name, balance);  
        b1.deposit(); 
        b1.withdraw(); 
        b1.display(); 
        return 0;
}