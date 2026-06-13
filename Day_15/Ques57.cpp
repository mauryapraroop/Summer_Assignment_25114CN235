#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter size: ";
    cin>>n;

    int arr[100];

    cout<<"Enter the elements in the array : ";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  
    for(int i=0;i<n/2;i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
   

    cout<<" The Reversed Array is : ";
      cout<< "[ ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
     cout<< " ]";
     
    return 0;
}