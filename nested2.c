#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 40) {
        if (marks >= 90)
            printf("Grade A");
        else if (marks >= 75)
            printf("Grade B");
        else if (marks >= 60)
            printf("Grade C");
        else
            printf("Grade D");
    }
    else {
        printf("Fail");
    }

    return 0;
}