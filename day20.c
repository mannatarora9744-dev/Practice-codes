// write a program to find the product of odd digits of a number.

#include <stdio.h>
int main() {
    int num, product = 1, hasOdd = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (num != 0) {
        remainder = num % 10;
        if (remainder % 2 != 0) { 
            product *= remainder;
            hasOdd = 1; 
        }
        num /= 10;
    }

    if (hasOdd) {
        printf("Product of odd digits: %d\n", product);
    } else {
        printf("No odd digits found in the number.\n");
    }

    return 0;
}