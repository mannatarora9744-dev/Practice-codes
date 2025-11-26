#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the size of subarray k: ");
    scanf("%d", &k);

    if(k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 1;
    }

    printf("First negative integers in each subarray of size %d: ", k);

    // Iterate through all windows
    for(int i = 0; i <= n - k; i++) {
        int found = 0;
        for(int j = i; j < i + k; j++) {
            if(arr[j] < 0) {
                printf("%d ", arr[j]);
                found = 1;
                break;  // First negative found
            }
        }
        if(!found) {
            printf("0 ");
        }
    }

    printf("\n");
    return 0;
}