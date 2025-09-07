// Program to convert percentage to grade.

#include <stdio.h>

int main() {
    int percentage;
    char grade;

    printf("Enter percentage (0-100): ");
    if (scanf("%d", &percentage) != 1 || percentage < 0 || percentage > 100) {
        printf("Invalid input. Please enter a number between 0 and 100.\n");
        return 1;
    }

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("Grade: %c\n", grade);

    return 0;
}