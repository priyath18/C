#include <stdio.h>

int main() {
    float marks, total, percentage;

    printf("Enter obtained marks: ");
    scanf("%f", &marks);

    printf("Enter total marks: ");
    scanf("%f", &total);

    percentage = (marks / total) * 100;

    printf("Percentage = %.2f%%", percentage);

    return 0;
}