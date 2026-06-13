#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[100];

    cout<<"Enter the elements inthe array : ";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int temp = arr[0];

    for(int i=0;i<n-1;i++)
    {
        arr[i] = arr[i+1];
    }

    arr[n-1] = temp;

    cout<<"After Left Rotation By 1: ";
    cout << "[ ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << "]";

    return 0;
}