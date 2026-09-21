#include <stdio.h>

int main() {
    float a, b, average;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    average = (a + b) / 2;

    printf("Average = %.2f", average);
    return 0;
}