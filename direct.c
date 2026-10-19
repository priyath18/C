#include <stdio.h>

bool isEven(int n) {
    return (n % 2 == 0) ? true : false;
}

int main() {
    bool result = isEven(10);
    printf("Is 10 even? %s\n", result ? "true" : "false");
    return 0;
}