
#include <stdio.h>

int main() {
    char n[100];
    int i, found = 0;

    printf("Enter a number: ");
    scanf("%99s", n);

    if (n[0] == '-') {
        printf("Enter a positive integer");
        return 0;
    }

    for (i = 0; n[i] != '\0'; i++) {
        if (n[i] < '0' || n[i] > '9') {
            printf("Invalid input");
            return 0;
        }
    }

    if (n[0] == '0') {
        printf("Not a Duck Number");
        return 0;
    }

    for (i = 1; n[i] != '\0'; i++) {
        if (n[i] == '0')
            found = 1;
    }

    if (found)
        printf("Duck Number");
    else
        printf("Not a Duck Number");

    return 0;
}
