#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Square = %d\n", number * number);
    printf("Cube = %d", number * number * number);
    return 0;
}
