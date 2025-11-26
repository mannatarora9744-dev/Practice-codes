#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (numbers from 0 to n with one missing): ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the expected sum of numbers from 0 to n
    int totalSum = n * (n + 1) / 2;

    // Calculate the sum of array elements
    int arrSum = 0;
    for(int i = 0; i < n; i++) {
        arrSum += arr[i];
    }

    int missingNumber = totalSum - arrSum;
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}