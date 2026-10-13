#include <stdio.h>

int main() {
    float cp, sp;

    printf("Enter cost price: ");
    scanf("%f", &cp);

    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (sp > cp)
        printf("Profit = %.2f", sp - cp);
    else if (cp > sp)
        printf("Loss = %.2f", cp - sp);
    else
        printf("No Profit No Loss");

    return 0;
}