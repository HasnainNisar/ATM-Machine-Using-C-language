/* ATM Machine project using C program
   This program simulates a real ATM Machine,
   allowing users to deposit, withdraw and check
   their balance. */

#include<stdio.h>

int main()
{
    int option;
    float balance = 0.0, deposit, withdraw;

    printf("\nWelcome to ATM Machine\n");
    printf("\n1. Deposit");
    printf("\n2. Withdraw");
    printf("\n3. Check Balance");
    printf("\n4. Exit");

    do
    {
        printf("\nEnter your option: ");
        scanf("%d", &option);
        switch (option)
        {
            case 1:
                printf("\nEnter amount to deposit: ");
                scanf("%f", &deposit);
                balance = balance + deposit;
                printf("\nYour current balance is %.2f", balance);
                break;
            case 2:
                printf("\nEnter amount to withdraw: ");
                scanf("%f", &withdraw);
                if(balance >= withdraw)
                {
                    balance = balance - withdraw;
                    printf("\nYour current balance is %.2f", balance);
                }
                else
                    printf("\nInsufficient balance");
                break;
            case 3:
                printf("\nYour current balance is %.2f", balance);
                break;
            case 4:
                printf("\nThank you for using our services!");
                break;
            default:
                printf("\nInvalid option!");
        }
    } while (option != 4);
    return 0;
}