#include <stdio.h>

int main() {
    int balance, amount;

    printf("Enter balance: ");
    scanf("%d", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if (balance < 0 || amount <= 0)
        printf("Invalid input");
    else if (amount % 100 != 0)
        printf("Enter amount in multiples of 100");
    else if (amount > balance)
        printf("Insufficient balance");
    else
        printf("Withdrawal successful");

    return 0;
}