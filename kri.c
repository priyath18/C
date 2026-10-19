
#include <stdio.h>

int main() {
    int n, temp, digit, fact, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Enter a non-negative number");
        return 0;
    }

    temp = n;

    do {
        digit = temp % 10;
        fact = 1;

        for (i = 1; i <= digit; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    } while (temp > 0);

    if (sum == n)
        printf("Krishnamurthy Number");
    else
        printf("Not a Krishnamurthy Number");

    return 0;
}
