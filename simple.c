#include <stdio.h>
int main() {
    float a, b;
    char op;

    printf("Enter: number operator number: ");
    scanf("%f %c %f", &a, &op, &b);

    if (op == '+')
        printf("Result = %.2f", a + b);
    else if (op == '-')
        printf("Result = %.2f", a - b);
    else if (op == '*')
        printf("Result = %.2f", a * b);
    else if (op == '/' && b != 0)
        printf("Result = %.2f", a / b);
    else
        printf("Invalid operator or division by zero");

    return 0;
}