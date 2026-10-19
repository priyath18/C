
#include <stdio.h>

int main() {
    int day, month, year, maxDays;
    int leap;

    printf("Enter day month year: ");
    scanf("%d%d%d", &day, &month, &year);

    if (year < 1 || month < 1 || month > 12 || day < 1) {
        printf("Invalid date");
        return 0;
    }

    leap = (year % 400 == 0) ||
           (year % 4 == 0 && year % 100 != 0);

    int days[] = {31, 28, 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};

    maxDays = days[month - 1];

    if (month == 2 && leap)
        maxDays = 29;

    if (day <= maxDays)
        printf("Valid date");
    else
        printf("Invalid date");

    return 0;
}
