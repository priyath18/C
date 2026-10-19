
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    if (len > 0 && str[len - 1] == '\n')
        str[--len] = '\0';

    printf("Reversed string: ");

    for (i = len - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}
