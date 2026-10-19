#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    int num1 = a, num2 = b;

    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2; // Remainder becomes new divisor
        num1 = temp;        // Previous divisor becomes new dividend
    }

    printf("GCD of %d and %d is: %d\n", a, b, num1);

    return 0;
}