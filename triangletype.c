#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
        printf("Invalid sides");
    else if (a + b <= c || a + c <= b || b + c <= a)
        printf("Triangle is not possible");
    else if (a == b && b == c)
        printf("Equilateral triangle");
    else if (a == b || b == c || a == c)
        printf("Isosceles triangle");
    else
        printf("Scalene triangle");

    return 0;
}