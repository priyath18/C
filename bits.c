
#include <stdio.h>

int main() {
    unsigned int n, count = 0;

    printf("Enter a number: ");
    scanf("%u", &n);

    while (n > 0) {
        count += n & 1u;
        n >>= 1;
    }

    printf("Number of set bits = %u", count);

    return 0;
}
