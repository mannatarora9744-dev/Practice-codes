// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#define PI 3.14

int main() {
    int radius;
    float area, circumference;

    // input radius
    printf("Enter radius of the circle: ");
    scanf("%d", &radius);

    // calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // display result
    printf("Area = %.2f, Circumference = %.2f\n", area, circumference);
    return 0;
}