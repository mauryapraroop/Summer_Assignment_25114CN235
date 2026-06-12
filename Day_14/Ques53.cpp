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
    cout << "enter element to be searched:";
    cin >> key;
    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            break;
        }  
    }
    if (found)
    {
        cout<< "element found :";

    }
    else
    cout << "element not found :";

    return 0;

}