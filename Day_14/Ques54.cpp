#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"enter the size of the array:";
    cin>>n;

    int arr[100];
    cout << "enter the elemenet of the array :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key = 0;
    cout << "enter element whose frequency is to be determined :";
    cin >> key;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }  
    }
    cout << "frequency of the element is : "<< count;

    return 0;

}