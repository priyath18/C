#include <stdio.h>

int main(void) {
    int num1, num2;

    num1 = 6;
    num2 = 14;

    printf("Assigned values: num1=%d, num2=%d\n", num1, num2);

    if (num1 == num2) {
        printf("Comparison result: num1 and num2 are equal\n");
    } else {
        printf("Comparison result: num1 and num2 are not equal\n");
    }

    return 0;
}