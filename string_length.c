#include <stdio.h>

int main() {
    char word[100];
    int length = 0;

    printf("Enter a word: ");
    scanf("%99s", word);

    while (word[length] != '\0')
        length++;

    printf("Length = %d", length);
    return 0;
}
