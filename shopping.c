
#include <stdio.h>

int main() {
    float price, discount;

    printf("Enter shopping amount: ");
    scanf("%f", &price);

    if (price < 0)
        printf("Invalid amount");
    else if (price >= 5000)
        discount = 20;
    else if (price >= 2000)
        discount = 10;
    else
        discount = 0;

    if (price >= 0) {
        printf("Discount = %.0f%%\n", discount);
        printf("Final price = %.2f",
               price - price * discount / 100);
    }

    return 0;
}
