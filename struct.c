
#include <stdio.h>

struct Contact {
    char name[50];
    char phone[20];
};

int main() {
    struct Contact c;

    printf("Enter contact name: ");
    scanf("%49s", c.name);

    printf("Enter phone number: ");
    scanf("%19s", c.phone);

    printf("\nContact Saved\n");
    printf("Name: %s\n", c.name);
    printf("Phone: %s\n", c.phone);

    return 0;
}
