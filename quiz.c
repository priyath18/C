
#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("1. Which language is used here?\n");
    printf("1. HTML  2. C  3. CSS\n");
    scanf("%d", &answer);

    if (answer == 2) score++;

    printf("\n2. What does CPU stand for?\n");
    printf("1. Central Processing Unit\n");
    printf("2. Computer Personal Unit\n");
    printf("3. Central Program Utility\n");
    scanf("%d", &answer);

    if (answer == 1) score++;

    printf("\n3. Which symbol ends a C statement?\n");
    printf("1. :  2. ,  3. ;\n");
    scanf("%d", &answer);

    if (answer == 3) score++;

    printf("\nYour score = %d/3\n", score);

    if (score == 3)
        printf("Excellent!");
    else if (score == 2)
        printf("Good job!");
    else
        printf("Keep practising!");

    return 0;
}
