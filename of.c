
#include <stdio.h>

int main() {
    int day, month, year, i, dayNumber = 0;
    int days[] = {31, 28, 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};

    printf("Enter day month year: ");
    scanf("%d%d%d", &day, &month, &year);

    if (year < 1 || month < 1 || month > 12 ||
        day < 1 || day > 31) {
        printf("Invalid input");
        return 0;
    }

    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
        days[1] = 29;

    for (i = 0; i < month - 1; i++)
        dayNumber += days[i];

    if (day > days[month - 1]) {
        printf("Invalid date");
        return 0;
    }

    dayNumber += day;

    printf("Day number = %d", dayNumber);

    return 0;
}
