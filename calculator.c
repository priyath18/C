
#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter expression (e.g. 5 + 3): ");
    scanf("%d %c %d", &a, &op, &b);

    if (op == '+')
        printf("Result = %d", a + b);
    else if (op == '-')
        printf("Result = %d", a - b);
    else if (op == '*')
        printf("Result = %d", a * b);
    else if (op == '/' && b != 0)
        printf("Result = %d", a / b);
    else
        printf("Invalid operator or division by zero");

    return 0;
}
