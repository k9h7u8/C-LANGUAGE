#include <iostream>
using namespace std;
int binarysearch(int arr[],int n, int key){
   int start_point = 0;
   int end_point = n;
   while (start_point<=end_point)
   {
      int mid = (start_point + end_point)/2;
      if (arr[mid] == key)
      {
          return mid;
      }
      else if (arr[mid]> key)
      {
          end_point = mid -1;
      }
      else if (arr[mid]<key)
      {
          start_point = mid +1;
      }
   }
   return -1;
}

int main()
    {
        int n;
        cout<<"enter the value of n\n";
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];

        }
        int key;
        cout<<"enter key\n";
        cin>>key;

        cout<<binarysearch(arr,n,key)<<endl;
      return 0;
    }
