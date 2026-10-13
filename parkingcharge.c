#include <stdio.h>

int main() {
    int hours, bill;

    printf("Enter parking hours: ");
    scanf("%d", &hours);

    if (hours <= 0)
        printf("Invalid hours");
    else if (hours <= 2) {
        bill = 30;
        printf("Parking charge = Rs. %d", bill);
    }
    else {
        bill = 30 + (hours - 2) * 20;
        printf("Parking charge = Rs. %d", bill);
    }

    return 0;
}