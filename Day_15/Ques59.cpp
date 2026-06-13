#include<iostream>
using namespace std;

int main (){
    int n;
    cout<< "enter the size of an array :";
    cin>> n ;

    int arr[100];
    cout<< "enter the elements in the array :";
    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    cout<<"the enetered array is : " ;
    cout << "[ ";
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " ";
    }
    cout<< "]";
    cout << " " << endl;

    int temp = arr[n-1];

    for (int i = n-1; i>0; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[0] =  temp ; 

    cout << "array after right rotation is : ";
    cout << "[ ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]";


    return 0 ;
    
}