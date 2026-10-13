#include <stdio.h>

int main() {
    float used, limit;

    printf("Enter data used and plan limit (GB): ");
    scanf("%f %f", &used, &limit);

    if (used < 0 || limit <= 0)
        printf("Invalid input");
    else if (used > limit)
        printf("Data limit exceeded");
    else if (used == limit)
        printf("Data limit reached");
    else if (used >= limit * 0.8)
        printf("Warning: 80%% data used");
    else
        printf("Data available");

    return 0;
}