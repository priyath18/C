#include <stdio.h>

int main() {
    int base, exponent, i;
    int result = 1;

    printf("Enter base and a non-negative exponent: ");
    scanf("%d %d", &base, &exponent);

    if (exponent < 0) {
        printf("Please enter a non-negative exponent");
        return 0;
    }

    for (i = 1; i <= exponent; i++)
        result *= base;

    printf("Answer = %d", result);
    return 0;
}
