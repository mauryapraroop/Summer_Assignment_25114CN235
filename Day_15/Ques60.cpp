#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the size of the array ";
    cin >> n ; 

    int arr[100];
    cout<< "enter elements in the array :" ;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "the entered array is : ";
    cout << "[ ";
    for (int i = 0; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " ]" << endl;

    int index = 0 ;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=0)
        {
            arr[index] = arr[i];
            index++;
        }
        
    }

    while (index<n)
    {
        arr[index] = 0;
        index++;
    }
    cout<< "array after moving zeros to end : ";
    cout<< "[ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<< " ";
    }
    cout<< "]";

    return 0 ; 

}