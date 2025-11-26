#include <stdio.h>

int main() {
    int n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int ceilIndex = -1;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] >= x) {
            ceilIndex = mid;      // Potential ceil found
            high = mid - 1;       // Look for an earlier occurrence
        } else {
            low = mid + 1;
        }
    }

    printf("%d\n", ceilIndex);

    return 0;
}