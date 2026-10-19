
#include <stdio.h>

int main() {
    FILE *fp = fopen("notes.txt", "r");
    int ch, count = 0;

    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
        count++;

    fclose(fp);

    printf("Total characters = %d", count);

    return 0;
}
