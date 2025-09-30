// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>
float sumOfSeries(int n) {
    float sum = 0.0;
    for (int i = 0; i < n; i++) {
        int numerator = 2 * i + 1;
        int denominator = 2 * i + 2;
        sum += (float)numerator / denominator;
    }
    return sum;
}
int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    float result = sumOfSeries(terms);
    printf("Sum of the series up to %d terms is: %.2f\n", terms, result);

    return 0;
}