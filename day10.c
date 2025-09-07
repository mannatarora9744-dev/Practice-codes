// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the lengths of the three sides of the triangle: ");
    if (scanf("%f %f %f", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 1;
    }

    // Check for valid triangle
    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        printf("Not a valid triangle.\n");
        return 1;
    }

    if (a == b && b == c) {
        printf("Equilateral triangle\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles triangle\n");
    } else {
        printf("Scalene triangle\n");
    }

    return 0;
}