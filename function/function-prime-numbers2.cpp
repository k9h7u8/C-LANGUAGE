#include <iostream>
#include <math.h>
using namespace std;

// bool datatype jidya 2 values hundia true false 1 for true zero for false

bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;      // a= 2 b==10
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    
}