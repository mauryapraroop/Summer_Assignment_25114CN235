#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "enter the size of array: ";
    cin >> n;

    int arr[100];

    cout << "enter the elemenets of array :";
    for ( int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    int even=0;
    int odd=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2 == 0)
            even++;
        else
            odd++;
    }

    cout<<"even element :" << even <<endl;
    cout <<"odd element : "<<odd << endl;


    return 0;
}