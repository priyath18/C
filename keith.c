
#include <stdio.h>

int main() {
    int n, temp, digits[20], len = 0;
    int sum, i, next;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 10) {
        printf("Not a Keith Number");
        return 0;
    }

    temp = n;

    while (temp > 0) {
        digits[len++] = temp % 10;
        temp /= 10;
    }

    for (i = 0; i < len / 2; i++) {
        int t = digits[i];
        digits[i] = digits[len - 1 - i];
        digits[len - 1 - i] = t;
    }

    while (1) {
        sum = 0;

        for (i = 0; i < len; i++)
            sum += digits[i];

        if (sum == n) {
            printf("Keith Number");
            break;
        }

        if (sum > n) {
            printf("Not a Keith Number");
            break;
        }

        for (i = 0; i < len - 1; i++)
            digits[i] = digits[i + 1];

        digits[len - 1] = sum;
    }

    return 0;
}
