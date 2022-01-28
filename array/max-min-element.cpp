#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n; // number of elements
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        // cout<<"Enter the value "<<i<<" ";
        cin >> arr[i];
    }

    int maxNo = INT_MIN; // temporary // 5
    int minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxNo)
        {
            maxNo = arr[i];
        }
        if (arr[i] < minNo)
        {
            minNo = arr[i];
        }
    }
    cout << maxNo << " " << minNo << endl;

    return 0;
}
