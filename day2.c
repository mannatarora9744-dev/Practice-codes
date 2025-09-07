// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main() {

    int length, breadth, area, perimeter;

    // input length and breadth
    printf("Enter length and breadth of the rectangle: ");
    scanf("%d %d", &length , &breadth);

    // calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // display result
    printf("Area = %d, Perimeter = %d\n", area, perimeter);
    return 0;
}
