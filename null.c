#include <stdio.h>

int main() {
    int *ptr = nullptr; // Modern, type-safe null pointer declaration

    if (ptr == nullptr) {
        printf("Pointer is safely null.\n");
    }

    return 0;
}