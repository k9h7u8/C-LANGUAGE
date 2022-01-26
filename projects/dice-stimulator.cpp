#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() 
{
    srand(time(0));
    cout<<"The Number is: "<<rand()%6+1<<endl;
    return 0;
}