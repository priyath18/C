
#include <stdio.h>

int main() {
    char str[100], oldChar, newChar;
    int i;

    printf("Enter a word: ");
    scanf("%99s", str);

    printf("Character to replace: ");
    scanf(" %c", &oldChar);

    printf("Replacement character: ");
    scanf(" %c", &newChar);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar)
            str[i] = newChar;
    }

    printf("Result: %s", str);

    return 0;
}
