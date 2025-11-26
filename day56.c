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

    printf("Next Greater Elements: ");

    for(int i = 0; i < n; i++) {
        int nextGreater = -1;

        // Search for the next greater element on the right
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;  // Found the nearest greater element
            }
        }

        // Print with comma separation
        if(i == n - 1) {
            printf("%d\n", nextGreater);
        } else {
            printf("%d, ", nextGreater);
        }
    }

    return 0;
}