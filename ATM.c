/*
Name : Kelvin Maina Mucheru 
Reg : CT101/G/264415/25
Description : a program that allows a user to withdraw and check  their balance

*/
#include <stdio.h>

int main() {
    int balance = 5000; // initial balance
    int withdraw;

    while (balance > 0) {
        printf("Current balance: %d\n", balance);
        printf("Enter amount to withdraw: ");
        scanf("%d", &withdraw);

        if (withdraw <= 0) {
            printf("Enter a positive amount!\n");
            continue;
        }

        balance -= withdraw;
    }

    printf("Balance is zero. No more withdrawals allowed.\n");

    return 0;
}