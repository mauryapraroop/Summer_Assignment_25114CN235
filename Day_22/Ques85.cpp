#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    int left = 0;
    int right = 0;

    bool palindrome = true;
    while(left < right)
    {
        if(str[left] != str[right])
        {
            palindrome = false;
            break;
        }

        left++;
        right--;
    }

    cout << "\nThe Entered String : " << str << endl;

    if(palindrome)
    {
        cout << "Palindrome String";
    }
    else
    {
        cout << "Not a Palindrome String";
    }

    return 0;
}