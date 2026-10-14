#include <stdio.h>

int main() {
    int number, digit, evenSum = 0, oddSum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;
        if (digit % 2 == 0)
            evenSum += digit;
        else
            oddSum += digit;
        number /= 10;
    }

    printf("Sum of even digits = %d\n", evenSum);
    printf("Sum of odd digits = %d", oddSum);
    return 0;
}
