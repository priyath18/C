#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0)
        count = 1;
    else {
        while (number != 0) {
            count++;
            number /= 10;
        }
    }

    printf("Number of digits = %d", count);
    return 0;
}
