#include <stdio.h>

int main() {
    int age;
    char learner;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 0)
        printf("Invalid age");
    else if (age >= 18) {
        printf("Do you have a learner's licence? (y/n): ");
        scanf(" %c", &learner);

        if (learner == 'y' || learner == 'Y')
            printf("Eligible to apply for a driving licence");
        else
            printf("Get a learner's licence first");
    }
    else
        printf("Not eligible by age");

    return 0;
}