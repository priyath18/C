#include <stdio.h>

int main() {
    int a, b, x, y, remainder, gcd;

    printf("Enter two positive numbers: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Please enter positive numbers");
        return 0;
    }

    x = a;
    y = b;
    while (y != 0) {
        remainder = x % y;
        x = y;
        y = remainder;
    }
    gcd = x;

    printf("LCM = %d", (a / gcd) * b);
    return 0;
}
