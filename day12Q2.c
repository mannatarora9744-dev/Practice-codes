// write a program to calculate library fine based on late days.

#include <stdio.h>
int main() {
    int daysLate;
    float fine;

    printf("Enter number of days late: ");
    scanf("%d", &daysLate);

    if (daysLate <= 0) {
        fine = 0;
    } else if (daysLate <= 5) {
        fine = daysLate * 1.0; 
    } else if (daysLate <= 10) {
        fine = 5 * 1.0 + (daysLate - 5) * 2.0; 
    } else {
        fine = 5 * 1.0 + 5 * 2.0 + (daysLate - 10) * 5.0; 
    }

    printf("Total fine: ₹%.2f\n", fine);
    return 0;
}