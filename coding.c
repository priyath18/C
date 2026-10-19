
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, words = 0, inside = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (!isspace((unsigned char)str[i])) {
            if (!inside) {
                words++;
                inside = 1;
            }
        } else {
            inside = 0;
        }
    }

    printf("Total words = %d", words);

    return 0;
}
