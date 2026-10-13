#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a % 10 == b % 10)
        printf("Same last digit");
    else
        printf("Different last digits");

    return 0;
}