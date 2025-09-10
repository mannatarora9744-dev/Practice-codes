// write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        sum += (2 * i + 1);
    }

    printf("Sum of the first %d odd numbers is: %d\n", n, sum);
    return 0;
}