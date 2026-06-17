#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "Enter a sentence : ";
    getline(cin, str);

    int words = 1;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            words++;
        }
    }

    cout << "\nSentence : " << str << endl;
    cout << "Number of Words = " << words;

    return 0;
}