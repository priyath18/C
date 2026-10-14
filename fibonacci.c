#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("How many terms (1 to 46)? ");
    scanf("%d", &n);

    if (n < 1 || n > 46) {
        printf("Please enter a number from 1 to 46");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
