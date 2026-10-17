
#include <stdio.h>

int main() {
    int choice;
    float a, b;

    do {
        printf("\n1. Add\n2. Subtract\n");
        printf("3. Multiply\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch (choice) {
            case 1: printf("Result = %.2f", a + b); break;
            case 2: printf("Result = %.2f", a - b); break;
            case 3: printf("Result = %.2f", a * b); break;
            case 4: printf("Goodbye!"); break;
            default: printf("Invalid choice");
        }

    } while (choice != 4);

    return 0;
}
