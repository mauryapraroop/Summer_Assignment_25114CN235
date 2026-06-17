#include <iostream>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter first string : ";
    getline(cin, str1);

    cout << "Enter second string : ";
    getline(cin, str2);

    if(str1.length() != str2.length())
    {
        cout << "Not Anagram";
        return 0;
    }

    for(int i = 0; i < str1.length()-1; i++)
    {
        for(int j = i+1; j < str1.length(); j++)
        {
            if(str1[i] > str1[j])
            {
                char temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }

            if(str2[i] > str2[j])
            {
                char temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    if(str1 == str2)
    {
        cout << "These Are Anagram Strings";
    }
    else
    {
        cout << "These Are Not Anagram Strings";
    }

    return 0;
}