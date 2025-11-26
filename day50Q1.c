#include <stdio.h>

int main() {
    int day, month, year;
    char monthStr[4];

    // Array of month abbreviations
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    // Validate month
    if(month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 1;
    }

    // Copy the month abbreviation
    snprintf(monthStr, sizeof(monthStr), "%s", months[month - 1]);

    printf("Formatted date: %02d-%s-%d\n", day, monthStr, year);

    return 0;
}