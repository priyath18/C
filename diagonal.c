
#include <stdio.h>

int main() {
    int a[3][3], i, j;
    int mainSum = 0, secondarySum = 0;

    printf("Enter 9 matrix elements:\n");

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < 3; i++) {
        mainSum += a[i][i];
        secondarySum += a[i][2 - i];
    }

    printf("Main diagonal sum = %d\n", mainSum);
    printf("Secondary diagonal sum = %d", secondarySum);

    return 0;
}
