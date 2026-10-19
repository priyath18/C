
#include <stdio.h>

int main() {
    int a[100], n, i, min, max;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size");
        return 0;
    }

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = max = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];

        if (a[i] > max)
            max = a[i];
    }

    printf("Minimum = %d\nMaximum = %d", min, max);

    return 0;
}
