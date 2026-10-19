
#include <stdio.h>

int main() {
    int n, digit, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) n = -n;

    do {
        digit = n % 10;

        if (digit > largest)
            largest = digit;

        n /= 10;
    } while (n > 0);

    printf("Largest digit = %d", largest);

    return 0;
}
