
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n < 1 || n > 1000000) {
        printf("Invalid number of terms");
        return 0;
    }

    for (i = 1; i <= n; i++)
        sum += 1.0 / i;

    printf("Sum = %.4f", sum);

    return 0;
}
