#include <stdio.h>

int main() {
    int number, original, reversed = 0, digit;

    printf("Enter a positive number: ");
    scanf("%d", &number);

    original = number;
    while (number > 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }

    if (original == reversed)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}
