
#include <stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 0)
        printf("Invalid age");
    else if (age < 5)
        printf("Ticket is free");
    else if (age <= 17)
        printf("Child ticket: Rs. 100");
    else if (age < 60)
        printf("Adult ticket: Rs. 200");
    else
        printf("Senior ticket: Rs. 120");

    return 0;
}
