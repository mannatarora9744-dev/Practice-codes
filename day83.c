#include <stdio.h>

int main() {
    // Define enumeration for months
    enum Months {
        JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE,
        JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
    };

    // Array storing number of days for each month (non-leap year)
    int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Array storing month names
    const char *monthNames[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    // Print days in each month
    for(int m = JANUARY; m <= DECEMBER; m++) {
        printf("%s has %d days\n", monthNames[m], daysInMonth[m]);
    }

    return 0;
}