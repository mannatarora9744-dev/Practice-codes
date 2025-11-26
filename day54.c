#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate total sum from 1 to n
    int totalSum = n * (n + 1) / 2;

    int leftSum = 0;
    int pivot = -1;

    for(int x = 1; x <= n; x++) {
        leftSum += x;              // Sum from 1 to x
        int rightSum = totalSum - (leftSum - x);  // Sum from x to n

        if(leftSum == rightSum) {
            pivot = x;
            break;                 // Only one pivot exists
        }
    }

    printf("%d\n", pivot);

    return 0;
}