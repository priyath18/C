
#include <stdio.h>

int main() {
    int a, b, r;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    int x = a, y = b;

    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }

    printf("GCD = %d", x);
    return 0;
}
