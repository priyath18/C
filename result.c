#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks out of 100: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
        printf("Invalid marks");
    else if (marks >= 40) {
        if (marks >= 80)
            printf("Pass - Distinction");
        else if (marks >= 60)
            printf("Pass - First Division");
        else
            printf("Pass");
    }
    else
        printf("Fail");

    return 0;
}