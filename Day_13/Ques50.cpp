#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "enter the size of array: ";
    cin >> n;

    int arr[100];
    int sum=0;

    cout << "enter the elemenets of array :";
    for ( int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    
    float average = (float)sum/n;

    cout<<"sum =" << sum << endl;
    cout<< "average = "<<average<<endl;

    return 0;
    
    
}