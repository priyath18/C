
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[300], word[100], longest[100];
    int i = 0, j, len, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        while (isspace((unsigned char)str[i]))
            i++;

        j = 0;

        while (str[i] != '\0' &&
               !isspace((unsigned char)str[i])) {
            if (j < 99)
                word[j++] = str[i];
            i++;
        }

        word[j] = '\0';
        len = strlen(word);

        if (len > maxLen) {
            maxLen = len;
            strcpy(longest, word);
        }
    }

    if (maxLen > 0)
        printf("Longest word: %s", longest);
    else
        printf("No word entered");

    return 0;
}
