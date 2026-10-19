
#include <stdio.h>

int main() {
    int n, rem, i = 0, j;
    char hex[50];

    printf("Enter a non-negative number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input");
        return 0;
    }

    if (n == 0) {
        printf("Hexadecimal = 0");
        return 0;
    }

    while (n > 0) {
        rem = n % 16;

        if (rem < 10)
            hex[i++] = rem + '0';
        else
            hex[i++] = rem - 10 + 'A';

        n /= 16;
    }

    printf("Hexadecimal = ");

    for (j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);

    return 0;
}
