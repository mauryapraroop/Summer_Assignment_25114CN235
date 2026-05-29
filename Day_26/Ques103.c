#include <stdio.h>
#include <string.h>

int main()
{
    int pin = 1234, enteredPin;
    int choice;
    int balance = 10000;
    int amount;
    int attempts = 0;
    int newPin;

    char name[50] = "Praroop Maurya";

    // Mini statement variables
    int lastDeposit = 0;
    int lastWithdraw = 0;

    printf("=====================================\n");
    printf("         WELCOME TO ATM\n");
    printf("=====================================\n");

    // PIN Authentication
    while (attempts < 3)
    {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin)
        {
            printf("\nLogin Successful!\n");
            break;
        }
        else
        {
            attempts++;
            printf("Wrong PIN!\n");

            if (attempts == 3)
            {
                printf("Too many failed attempts!\n");
                printf("Your account has been blocked.\n");
                return 0;
            }
        }
    }

    // Main ATM Menu
    while (1)
    {
        printf("\n=====================================\n");
        printf("           ATM MAIN MENU\n");
        printf("=====================================\n");

        printf("Welcome, %s\n", name);

        printf("\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Fast Cash");
        printf("\n5. Change PIN");
        printf("\n6. Mini Statement");
        printf("\n7. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        // CHECK BALANCE
        case 1:
            printf("\nCurrent Balance: Rs.%d\n", balance);
            break;

        // DEPOSIT
        case 2:
            printf("\nEnter amount to deposit: ");
            scanf("%d", &amount);

            if (amount <= 0)
            {
                printf("Invalid amount!\n");
            }
            else
            {
                balance += amount;
                lastDeposit = amount;

                printf("Rs.%d deposited successfully.\n", amount);
                printf("Updated Balance: Rs.%d\n", balance);
            }
            break;

        // WITHDRAW
        case 3:
            printf("\nEnter amount to withdraw: ");
            scanf("%d", &amount);

            if (amount <= 0)
            {
                printf("Invalid amount!\n");
            }
            else if (amount > balance)
            {
                printf("Insufficient balance!\n");
            }
            else
            {
                balance -= amount;
                lastWithdraw = amount;

                printf("Please collect your cash.\n");
                printf("Remaining Balance: Rs.%d\n", balance);
            }
            break;

        // FAST CASH
        case 4:
            printf("\nFAST CASH OPTIONS\n");
            printf("1. Rs.500");
            printf("\n2. Rs.1000");
            printf("\n3. Rs.2000");
            printf("\n4. Rs.5000");

            printf("\n\nSelect option: ");
            scanf("%d", &amount);

            if (amount == 1)
                amount = 500;
            else if (amount == 2)
                amount = 1000;
            else if (amount == 3)
                amount = 2000;
            else if (amount == 4)
                amount = 5000;
            else
            {
                printf("Invalid option!\n");
                break;
            }

            if (amount > balance)
            {
                printf("Insufficient balance!\n");
            }
            else
            {
                balance -= amount;
                lastWithdraw = amount;

                printf("Please collect Rs.%d\n", amount);
                printf("Remaining Balance: Rs.%d\n", balance);
            }

            break;

        // CHANGE PIN
        case 5:
            printf("\nEnter new PIN: ");
            scanf("%d", &newPin);

            pin = newPin;

            printf("PIN changed successfully.\n");
            break;

        // MINI STATEMENT
        case 6:
            printf("\n========== MINI STATEMENT ==========\n");

            printf("Account Holder : %s\n", name);
            printf("Current Balance: Rs.%d\n", balance);

            if (lastDeposit > 0)
                printf("Last Deposit   : Rs.%d\n", lastDeposit);
            else
                printf("Last Deposit   : No deposit yet\n");

            if (lastWithdraw > 0)
                printf("Last Withdraw  : Rs.%d\n", lastWithdraw);
            else
                printf("Last Withdraw  : No withdrawal yet\n");

            printf("====================================\n");

            break;

        // EXIT
        case 7:
            printf("\nThank you for using our ATM.\n");
            printf("Visit Again!\n");
            return 0;

        // INVALID CHOICE
        default:
            printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}