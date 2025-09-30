// Write a program to check if a number is a strong number.

#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int isStrong(int num) {
    int sum = 0, temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    return sum == num;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isStrong(number)) {
        printf("%d is a strong number.\n", number);
    } else {
        printf("%d is not a strong number.\n", number);
    }

    return 0;
}