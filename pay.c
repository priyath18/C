#include <stdio.h>

int main() {
    int hours;
    float rate = 150, pay;

    printf("Enter weekly working hours: ");
    scanf("%d", &hours);

    if (hours < 0)
        printf("Invalid hours");
    else if (hours > 40) {
        pay = (hours - 40) * rate;
        printf("Overtime pay = Rs. %.2f", pay);
    }
    else
        printf("No overtime pay");

    return 0;
}