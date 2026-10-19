
#include <stdio.h>
#include <string.h>

void permute(char s[], int start, int end) {
    int i;
    char temp;

    if (start == end) {
        printf("%s\n", s);
        return;
    }

    for (i = start; i <= end; i++) {
        temp = s[start];
        s[start] = s[i];
        s[i] = temp;

        permute(s, start + 1, end);

        temp = s[start];
        s[start] = s[i];
        s[i] = temp;
    }
}

int main() {
    char str[9];

    printf("Enter a short word (max 8 chars): ");
    scanf("%8s", str);

    permute(str, 0, (int)strlen(str) - 1);

    return 0;
}
