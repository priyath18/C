#include <stdio.h>

int main() {
    int numbers[5], i, search, found = 0;

    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
        scanf("%d", &numbers[i]);

    printf("Enter number to search for: ");
    scanf("%d", &search);

    for (i = 0; i < 5; i++) {
        if (numbers[i] == search) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Number found at position %d", i + 1);
    else
        printf("Number not found");

    return 0;
}
