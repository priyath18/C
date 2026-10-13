#include <stdio.h>

int main() {
    float km, fare;

    printf("Enter distance in km: ");
    scanf("%f", &km);

    if (km <= 0)
        printf("Invalid distance");
    else if (km <= 2)
        printf("Fare = Rs. 50");
    else {
        fare = 50 + (km - 2) * 12;
        printf("Fare = Rs. %.2f", fare);
    }

    return 0;
}