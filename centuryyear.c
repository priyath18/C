#include <stdio.h>

int main() {
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if (year <= 0)
        printf("Invalid year");
    else if (year % 100 == 0)
        printf("Century year");
    else
        printf("Not a century year");

    return 0;
}