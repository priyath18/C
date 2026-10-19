
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a, *temp;
    int i;

    a = malloc(3 * sizeof(int));

    if (a == NULL)
        return 1;

    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    temp = realloc(a, 5 * sizeof(int));

    if (temp == NULL) {
        free(a);
        printf("Memory resize failed");
        return 1;
    }

    a = temp;
    a[3] = 40;
    a[4] = 50;

    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);

    free(a);

    return 0;
}
