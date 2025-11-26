#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate total sum of the array
    int totalSum = 0;
    for(int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    int pivotIndex = -1;

    for(int i = 0; i < n; i++) {
        // Right sum = totalSum - leftSum - arr[i]
        int rightSum = totalSum - leftSum - arr[i];

        if(leftSum == rightSum) {
            pivotIndex = i;  // Found the pivot
            break;           // Leftmost pivot
        }

        leftSum += arr[i];
    }

    printf("%d\n", pivotIndex);

    return 0;
}