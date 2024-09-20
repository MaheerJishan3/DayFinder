#include <stdio.h>

int main() {
    int day, month, year, p, weekDay, totDay;
    
    printf("This program tells you what was the day of the week on a date\n");
    printf("Please, enter your date in DD MM YYYY format: ");
    scanf("%d %d %d", &day, &month, &year);

    p = (year - 1) / 4;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        if (month == 1) {
            totDay = day;
        } else if (month == 2) {
            totDay = 31 + day;
        } else if (month == 3) {
            totDay = 60 + day;
        } else if (month == 4) {
            totDay = 91 + day;
        } else if (month == 5) {
            totDay = 121 + day;
        } else if (month == 6) {
            totDay = 152 + day;
        } else if (month == 7) {
            totDay = 182 + day;
        } else if (month == 8) {
            totDay = 213 + day;
        } else if (month == 9) {
            totDay = 244 + day;
        } else if (month == 10) {
            totDay = 274 + day;
        } else if (month == 11) {
            totDay = 305 + day;
        } else if (month == 12) {
            totDay = 335 + day;
        }
    } else {
        if (month == 1) {
            totDay = day;
        } else if (month == 2) {
            totDay = 31 + day;
        } else if (month == 3) {
            totDay = 59 + day;
        } else if (month == 4) {
            totDay = 90 + day;
        } else if (month == 5) {
            totDay = 120 + day;
        } else if (month == 6) {
            totDay = 151 + day;
        } else if (month == 7) {
            totDay = 181 + day;
        } else if (month == 8) {
            totDay = 212 + day;
        } else if (month == 9) {
            totDay = 243 + day;
        } else if (month == 10) {
            totDay = 273 + day;
        } else if (month == 11) {
            totDay = 304 + day;
        } else if (month == 12) {
            totDay = 334 + day;
        }
    }

    weekDay = (year + p + totDay) % 7; 

    if (weekDay == 1) {
        printf("It was Saturday on %d/%d/%d", day, month, year);
    } else if (weekDay == 2) {
        printf("It was Sunday on %d/%d/%d", day, month, year);
    } else if (weekDay == 3) {
        printf("It was Monday on %d/%d/%d", day, month, year);
    } else if (weekDay == 4) {
        printf("It was Tuesday on %d/%d/%d", day, month, year);
    } else if (weekDay == 5) {
        printf("It was Wednesday on %d/%d/%d", day, month, year);
    } else if (weekDay == 6) {
        printf("It was Thursday on %d/%d/%d", day, month, year);
    } else if (weekDay == 0) {
        printf("It was Friday on %d/%d/%d", day, month, year);
    } else {
        printf("There are some inconventions. Please, check if your date is valid");
    }

    return 0;
}