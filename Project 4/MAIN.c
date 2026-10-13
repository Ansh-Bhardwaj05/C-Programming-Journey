//----------------------------------------------------ATM SIMULATION-------------------------------------------------------------------------//

#include <stdio.h>

void Menu();
void CheckBalance(float balance);
float deposit(float balance);
float withdraw(float balance);
int changepin(int pin);

int main()
{
    int pin = 1234;
    int enteredpin;
    int newpin;
    int choice;
    int attempts = 0;
    float amount;
    float balance = 10000;

    printf("\n-------------------ATM MACHINE--------------------------\n");

    while (attempts < 3)
    {
        printf("Enter your PIN: ");
        scanf("%d", &enteredpin);

        if (enteredpin == pin)
        {
            printf("Login Successfull\n");
            break;
        }
        attempts++;

        printf("Incorrect PIN\n");
        printf("Attempts remaining: %d\n", 3 - attempts);

        if (attempts == 3)
        {
            printf("Too many incorrect attempts. \n");
            printf("Account Temporarily Blocked. \n");
        }
    }
    if(enteredpin == pin)
    {
    do
    {
        Menu();
        printf("Enter your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            CheckBalance(balance);
            break;

        case 2:
            deposit(balance);
            break;

        case 3:
            withdraw(balance);
            break;

        case 4:
            changepin(pin);

            if (newpin != pin)
            {
                pin = newpin;
            }
            break;

        case 5:
            printf("THANK YOU FOR USING THE ATM \n");
            printf("HAVE A NICE DAY\n");
            break;

        default:
            printf("Invalid choice! Please try again\n");
            break;
        }

    } while (choice != 5);
    }
}

void Menu()
{
    printf("-------------MENU-------------\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Change PIN\n");
    printf("5. Exit\n");
}

void CheckBalance(float balance)
{
    printf("Current Balance: %.2f\n", balance);
}

float deposit(float balance)
{
    float amount;

    printf("Enter Amount to Deposit: \n");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Invalid Amount \n");
    }
    else
    {
        balance += amount;

        printf("%.2f deposited successfully\n", amount);
        printf("New Balance: %.2f\n", balance);
    }
    return balance;
}

float withdraw(float balance)
{
    float amount;

    printf("Enter Amount to Withdraw: \n");
    scanf("%f", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient Balance\n");
    }
    else
    {
        balance -= amount;

        printf("Please collect your Cash\n");
        printf("%.2f withdrawn successfully\n", amount);
        printf("Remaining Balance %.2f\n", balance);
    }
    return balance;
}

int changepin(int pin)
{
    int currentpin;
    int newpin;

    printf("Enter your Current PIN: \n");
    scanf("%d", &currentpin);

    if (currentpin != pin)
    {
        printf("Incorrect PIN\n");

        return pin;
    }

    printf("Enter your New 4-Digit PIN: \n");
    scanf("%d", &newpin);

    if (newpin >= 1000 && newpin <= 9999)
    {
        printf("PIN changed successfully\n");

        return newpin;
    }
    else
    {
        printf("PIN must contain exact 4-Digits\n");
    }
}