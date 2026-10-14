#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    printf("Odd numbers: ");
    for (i = 1; i <= n; i += 2)
        printf("%d ", i);

    return 0;
}
