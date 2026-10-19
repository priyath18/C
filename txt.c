
#include <stdio.h>

int main() {
    FILE *fp = fopen("notes.txt", "w");

    if (fp == NULL) {
        printf("Unable to open file");
        return 1;
    }

    fprintf(fp, "Hello from C programming!\n");
    fprintf(fp, "Learning file handling.");

    fclose(fp);

    printf("Data written successfully");

    return 0;
}
