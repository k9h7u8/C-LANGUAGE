#include <iostream>
using namespace std;
void game(int user_choice){
    int computer_choice;
    computer_choice = rand()%3+1;
    // rock=1
    // paper =2
    // scissor=3
    if(computer_choice == user_choice)
    {
    cout<<"Match Tied"<< endl;
    }
    else if (computer_choice==1 && user_choice==2 || computer_choice==2 && user_choice==3 || computer_choice==3 && user_choice==1)
    {
        cout<<"You Win"<< endl;
    }
    else if (computer_choice==2 && user_choice==1 || computer_choice==3 && user_choice==2 || computer_choice==1 && user_choice==3)
    {
        cout<<"You Loss"<< endl;
    }
    switch (computer_choice)
    {
    case 1:
        cout << "Computer choosed Rock" << endl;
        break;
    case 2:
        cout << "Computer choosed Paper" << endl;
        break;
    case 3:
        cout << "Computer choosed Scissor" << endl;
        break;

    default:
        break;
    }
}
int main() 
{
    int user_choice;
    cout<<endl;

        cout << "--------------------------- Welcome to the game ---------------------------" << endl;
        cout << endl;
        cout << "Choose an option:" << endl;
        cout << "\t\t\t1: Rock \n\t\t\t2: Paper \n\t\t\t3: Scissor" << endl;
        cin >> user_choice;
        game(user_choice);

    return 0;
}
    