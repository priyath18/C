
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, x, y, r, gcd;

    printf("Enter two positive integers: ");
    scanf("%d%d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Enter positive integers");
        return 0;
    }

    x = a;
    y = b;

    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }

    gcd = x;

    printf("GCD = %d\n", gcd);
    printf("LCM = %lld", (long long)a / gcd * b);

    return 0;
}
