
#include <stdio.h>

int main() {
    int choice;
    float value;

    printf("1. Kilometres to metres\n");
    printf("2. Metres to centimetres\n");
    printf("3. Kilograms to grams\n");
    printf("4. Celsius to Fahrenheit\n");
    printf("Choose: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%f", &value);

    switch (choice) {
        case 1:
            printf("%.2f metres", value * 1000);
            break;

        case 2:
            printf("%.2f centimetres", value * 100);
            break;

        case 3:
            printf("%.2f grams", value * 1000);
            break;

        case 4:
            printf("%.2f Fahrenheit",
                   value * 9.0f / 5.0f + 32);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
