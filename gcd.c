#include <stdio.h>

int main() {
    int a, b, remainder;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive numbers");
        return 0;
    }

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("GCD = %d", a);
    return 0;
}
