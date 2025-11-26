#include <stdio.h>
#include <stdlib.h>

// Compare function for qsort
int cmpfunc(const void *a, const void *b) {
    return ((int)a - (int)b);
}

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if(k <= 0 || k > n) {
        printf("Invalid value of k.\n");
        return 1;
    }

    // Sort the array in ascending order
    qsort(arr, n, sizeof(int), cmpfunc);

    // The kth smallest element is at index k-1
    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}