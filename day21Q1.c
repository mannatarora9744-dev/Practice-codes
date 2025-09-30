// write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>
int swapFirstAndLastDigit(int num) {
    int lastDigit = num % 10;
    int firstDigit = num;
    int digits = 0;

    while (firstDigit >= 10) {
        firstDigit /= 10;
        digits++;
    }

    if (digits == 0) {
        return num; 
    }

    int middlePart = (num % (int)pow(10, digits)) / 10;
    int swappedNum = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    return swappedNum;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int swappedNumber = swapFirstAndLastDigit(number);
    printf("Number after swapping first and last digit: %d\n", swappedNumber);

    return 0;
}