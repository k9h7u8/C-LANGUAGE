/*
In this we use library for randam numbers . The program asks for a betting number on rolling . If the random number matches the user
input , he wins , else money is deducted . The user can keep playing untill he losses all the amount he put in initially 
*/

#include<iostream>
#include<stdlib.h>  // Need to use Random numbers 
#include<time.h>
#include<string.h>

using namespace std;

void Rules()
{
    cout<<"\t\t=========== CASINO NUMBER GUESSING RULES ========== "<<endl;
    cout<<"\t 1.) Choose a number between 1 to 10"<<endl;
    cout<<"\t 2.) Winner gets 10 times of the money he/she bet"<<endl;
    cout<<"\t 3.) Wrong bet, and you loose the money you bet \n"<<endl;
}


    int main()
{
    string playername;
    int balance;       //Stores player's balance
    int betting_amt;
    int guess;
    int dice;
    char choice;

    srand(time(0));    //Seed the random generator

    cout<<"\n\t\t\t\t ========== WELCOME TO THE CASINO WORLD =========="<<endl;
    cout<<"\t\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t*\t t*\t*\t*\t*\t*\t\n  \tLets start the GAME "<<endl;
    cout<<"\n What is your name : ";
    getline(cin, playername);

    /*getline() is a standard library function used to read a string and a line with wide spaces from an input stream */

    cout<<"\n\n Enter the starting balance to start the game : $ ";
    cin>>balance;

    do 
    {

        Rules();

        cout<<"\nYour current balance is $ "<<balance<<endl;
        // Get players betting balance

        do 
        {
            cout<<"Hey! "<<playername<<" enter amount to bet $"<<endl;
            cin>>betting_amt;

            if (betting_amt > balance)
            {
                cout<<"Beting blance should not be greater than the current balance "<<endl;
                cout<<"Re Enter the amount "<<endl;
            }
            
        } while(betting_amt > balance);

        // Get players number

        do
        {
            cout<<"Guess any number between 1 - 10 : "<<endl;
            cin>>guess;

            if(guess <= 0 && guess >= 10)
            {
                cout<<"Number should be between 1 - 10 "<<endl;
                cout<<"Re - enter the number "<<endl;
            }
        } while (guess <= 0 && guess >= 10) ;

        // while (guess <= 0 && guess >= 10) 
        // {
        //     cout<<"Guess any number between 1 - 10 : "<<endl;
        //     cin>>guess;

        //     if(guess <= 0 && guess >= 10)
        //     {
        //         cout<<"Number should be between 1 - 10 "<<endl;
        //         cout<<"Re - enter the number "<<endl;
        //     }
        // }

        dice = rand()%10 +1 ;
        
        if(guess == dice)
        {
            cout<<"\nYou are in luck !! You won $ "<<(betting_amt * 10)<<endl;
            balance = balance + (betting_amt * 10);
        }
        else 
        {
            cout<<"Oops better luck next time !! You lost $ "<<betting_amt<<endl;
            balance = balance - betting_amt;
        }
        
        cout <<" The winning number was : "<<dice<<endl;
        cout<<endl;

        cout<<playername<<" You have bslance "<<balance<<endl;
        
        if(balance == 0)
        {
            cout<<"You have no money to pay "<<endl;
            break;

        }

        cout<<"Do you want to play again tpye (Y/N)"<<endl;
        cin>>choice;

    }while (choice == 'Y' || choice == 'y');

    return 0;
}