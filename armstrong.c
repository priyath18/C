#include <stdio.h>

int main() {
    int number, original, digit, sum = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    if (number < 100 || number > 999) {
        printf("Please enter a three-digit number");
        return 0;
    }

    original = number;
    while (number > 0) {
        digit = number % 10;
        sum += digit * digit * digit;
        number /= 10;
    }

    if (sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
