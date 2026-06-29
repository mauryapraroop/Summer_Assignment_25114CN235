#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    Student s[100];
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cout << "\nStudent " << i+1 << endl;
        cout << "Roll: ";
        cin >> s[i].roll;

        cin.ignore();
        cout << "Name: ";
        getline(cin,s[i].name);

        cout << "Marks: ";
        cin >> s[i].marks;
    }

    cout << "\nStudent Records\n";

    for(int i=0;i<n;i++)
    {
        cout << "\nRoll: " << s[i].roll;
        cout << "\nName: " << s[i].name;
        cout << "\nMarks: " << s[i].marks << endl;
    }

    return 0;
}