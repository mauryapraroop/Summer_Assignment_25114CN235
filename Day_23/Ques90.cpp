#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string : ";
    getline(cin, str);

    bool found = false;
    for(int i = 0; str[i] != '\0'; i++)
    {
        for(int j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                cout << "First Repeating Character = " << str[i];
                found = true;
                break;
            }
        }

        if(found)
        {
            break;
        }
    }

    if(!found)
    {
        cout << "No Repeating Character Found";
    }

    return 0;
}