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

    printf("Previous Greater Elements: ");

    for(int i = 0; i < n; i++) {
        int prevGreater = -1;

        // Search for the previous greater element on the left
        for(int j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;  // Found the nearest greater element on the left
            }
        }

        // Print with comma separation
        if(i == n - 1) {
            printf("%d\n", prevGreater);
        } else {
            printf("%d, ", prevGreater);
        }
    }

    return 0;
}