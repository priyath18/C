#include <stdio.h>

int main(void) {
    int a[5];
    int i;

    printf("Enter 5 numbers: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("\nArray elements: ");

    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}