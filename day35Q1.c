#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = -2147483648;        // smallest possible int
    int secondLargest = -2147483648; // same

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;   // old largest becomes second largest
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -2147483648)
        printf("No second largest element (all elements may be equal).\n");
    else
        printf("Second largest element: %d\n", secondLargest);

    return 0;
}