
#include <stdio.h>

int main() {
    FILE *source = fopen("notes.txt", "rb");
    FILE *target;
    int ch;

    if (source == NULL) {
        printf("Source file not found");
        return 1;
    }

    target = fopen("copy.txt", "wb");

    if (target == NULL) {
        fclose(source);
        printf("Cannot create destination file");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
        fputc(ch, target);

    fclose(source);
    fclose(target);

    printf("File copied successfully");

    return 0;
}
