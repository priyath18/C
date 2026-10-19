
#include <stdio.h>

int sum(int n) {
    if (n <= 0)
        return 0;

    return n + sum(n - 1);
}

int main() {
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Enter a non-negative number");
    else
        printf("Sum = %d", sum(n));

    return 0;
}
