#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a number from 0 to 20: ");
    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Please enter a number from 0 to 20");
        return 0;
    }

    for (i = 1; i <= n; i++)
        factorial *= i;

    printf("Factorial = %llu", factorial);
    return 0;
}
