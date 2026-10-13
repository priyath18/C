#include <stdio.h>
#include <string.h>

int main() {
    char username[30], password[30];

    printf("Enter username: ");
    scanf("%29s", username);

    printf("Enter password: ");
    scanf("%29s", password);

    if (strcmp(username, "student") == 0) {
        if (strcmp(password, "1234") == 0)
            printf("Login successful");
        else
            printf("Incorrect password");
    }
    else {
        printf("User not found");
    }

    return 0;
}