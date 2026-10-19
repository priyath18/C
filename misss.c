
#include <stdio.h>

int main() {
    int a[] = {1, 2, 4, 5, 6};
    int n = 6, i;
    int expected = n * (n + 1) / 2;
    int actual = 0;

    for (i = 0; i < n - 1; i++)
        actual += a[i];

    printf("Missing number = %d", expected - actual);

    return 0;
}
