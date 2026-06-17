#include <iostream>
using namespace std;

int main()
{
    string str;
    char target;

    cout << "Enter a string : ";
    getline(cin, str);

    cout << "Enter character to find frequency : ";
    cin >> target;

    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == target)
        {
            count++;
        }
    }
    cout << "\nFrequency of " << target << " = " << count;

    return 0;
}