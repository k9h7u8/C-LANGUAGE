#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n\n";
    cin >> n;

    char arr[n+1];
    cin >> arr;

    bool flag = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == true)
    {
        cout << "the word is palidrome";
    }
    else
    {
        cout << "the word is not palidrome";
    }

    return 0;
}