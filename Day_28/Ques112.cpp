#include <iostream>
#include <string>
using namespace std;

class Contact
{
private:
    string name;
    string phoneNumber;
    string email;
    bool exists;

public:
    Contact()
    {
        exists = false;
    }

    bool isExists()
    {
        return exists;
    }

    string getName()
    {
        return name;
    }

    void addContact()
    {
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Phone Number: ";
        getline(cin, phoneNumber);

        cout << "Enter Email: ";
        getline(cin, email);

        exists = true;
        cout << "\nContact Added Successfully!\n";
    }

    void updateContact()
    {
        if (exists)
        {
            cin.ignore();

            cout << "Enter New Phone Number: ";
            getline(cin, phoneNumber);

            cout << "Enter New Email: ";
            getline(cin, email);

            cout << "Contact Updated Successfully!\n";
        }
        else
        {
            cout << "Contact Not Found!\n";
        }
    }

    void deleteContact()
    {
        exists = false;
        cout << "Contact Deleted Successfully!\n";
    }

    void displayContact()
    {
        if (exists)
        {
            cout << "\n----------------------------";
            cout << "\nName         : " << name;
            cout << "\nPhone Number : " << phoneNumber;
            cout << "\nEmail        : " << email;
            cout << "\n----------------------------\n";
        }
    }
};

int main()
{
    Contact contacts[100];

    int totalContacts = 0;
    int choice;
    string searchName;
    bool found;

    while (true)
    {
        cout << "\n===== CONTACT MANAGEMENT SYSTEM =====";
        cout << "\n1. Add Contact";
        cout << "\n2. Search Contact";
        cout << "\n3. Update Contact";
        cout << "\n4. Delete Contact";
        cout << "\n5. Display All Contacts";
        cout << "\n6. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            contacts[totalContacts].addContact();
            totalContacts++;
            break;

        case 2:

            cin.ignore();
            cout << "Enter Name to Search: ";
            getline(cin, searchName);

            found = false;

            for (int i = 0; i < totalContacts; i++)
            {
                if (contacts[i].isExists() &&
                    contacts[i].getName() == searchName)
                {
                    contacts[i].displayContact();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Contact Not Found!\n";

            break;

        case 3:

            cin.ignore();
            cout << "Enter Name to Update: ";
            getline(cin, searchName);

            found = false;

            for (int i = 0; i < totalContacts; i++)
            {
                if (contacts[i].isExists() &&
                    contacts[i].getName() == searchName)
                {
                    contacts[i].updateContact();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Contact Not Found!\n";

            break;

        case 4:

            cin.ignore();
            cout << "Enter Name to Delete: ";
            getline(cin, searchName);

            found = false;

            for (int i = 0; i < totalContacts; i++)
            {
                if (contacts[i].isExists() &&
                    contacts[i].getName() == searchName)
                {
                    contacts[i].deleteContact();
                    found = true;
                    break;
                }
            }

            if (!found)
                cout << "Contact Not Found!\n";

            break;

        case 5:

            found = false;

            cout << "\n===== CONTACT LIST =====\n";

            for (int i = 0; i < totalContacts; i++)
            {
                if (contacts[i].isExists())
                {
                    contacts[i].displayContact();
                    found = true;
                }
            }

            if (!found)
                cout << "No Contacts Available!\n";

            break;

        case 6:

            cout << "Thank You!\n";
            return 0;

        default:

            cout << "Invalid Choice!\n";
        }
    }

    return 0;
}