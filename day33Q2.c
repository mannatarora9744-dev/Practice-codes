#include <stdio.h>

int main() {
    int n, i, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];  // +1 for inserting new element

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Find correct position
    int pos = n - 1;
    while (pos >= 0 && arr[pos] > key) {
        arr[pos + 1] = arr[pos];  // shift elements to the right
        pos--;
    }

    arr[pos + 1] = key;  // insert element

    printf("Array after insertion:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}