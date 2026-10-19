
#include <stdio.h>

int main() {
    FILE *fp = fopen("notes.txt", "a");

    if (fp == NULL) {
        printf("Unable to open file");
        return 1;
    }

    fprintf(fp, "\nThis line was added later.");

    fclose(fp);

    printf("Text appended successfully");

    return 0;
}
