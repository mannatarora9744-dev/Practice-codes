// write a program to find sum of digits of a number.

#include <stdio.h>
int main() {
    int num, sum = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}