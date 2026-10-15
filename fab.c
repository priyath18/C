
#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("How many terms? ");
    scanf("%d", &n);

    if (n < 1 || n > 45) {
        printf("Enter terms from 1 to 45");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}
