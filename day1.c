// Write a program to input two numbers and display their sum.

#include <stdio.h>
int main() {
    int a, b, sum;
    // input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d" , &a, &b);

    //calculate sum
    sum = a + b;

    //display result
    printf("sum = %d, diff=%d, product=%d quotient=%d\n" , a+b, a-b, a*b, a/b);

    return 0;
}