// Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    // Swap using a third variable
    temp = a;
    a = b;
    b = temp;

    // Output the swapped values
    printf("After swapping:\n");
    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);

    return 0;
}