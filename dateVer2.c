#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int day, month, year, p, weekDay, totDay;

    // Cumulative number of days for each month (index 0 is unused for convenience)
    int daysInMonths[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    
    printf("This program tells you what was the day of the week on a date\n");
    printf("Please, enter your date in DD MM YYYY format: ");
    scanf("%d %d %d", &day, &month, &year);

    // Total days from January 1st to the given date
    totDay = daysInMonths[month - 1] + day;

    // Adjust for leap year if necessary and the month is after February
    if (isLeapYear(year) && month > 2) {
        totDay += 1;
    }

    // Calculate leap year count p
    p = (year - 1) / 4;

    // Calculate the day of the week
    weekDay = (year + p + totDay) % 7;

    // Output the result
    switch(weekDay) {
        case 1: printf("It was Saturday on %d/%d/%d\n", day, month, year); break;
        case 2: printf("It was Sunday on %d/%d/%d\n", day, month, year); break;
        case 3: printf("It was Monday on %d/%d/%d\n", day, month, year); break;
        case 4: printf("It was Tuesday on %d/%d/%d\n", day, month, year); break;
        case 5: printf("It was Wednesday on %d/%d/%d\n", day, month, year); break;
        case 6: printf("It was Thursday on %d/%d/%d\n", day, month, year); break;
        case 0: printf("It was Friday on %d/%d/%d\n", day, month, year); break;
        default: printf("There are some inconveniences. Please, check if your date is valid.\n");
    }

    return 0;
}
