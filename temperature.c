#include <stdio.h>

int main() {
    float temp;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);

    if (temp < 0)
        printf("Freezing temperature");
    else if (temp < 15)
        printf("Cold");
    else if (temp < 25)
        printf("Moderate");
    else if (temp < 35)
        printf("Warm");
    else
        printf("Hot");

    return 0;
}