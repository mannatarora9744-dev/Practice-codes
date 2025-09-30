// Find the maximum and minimum element in an array.

#include <stdio.h>
void findMaxMin(int arr[], int size, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}
int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max, min;
    findMaxMin(arr, size, &max, &min);
    printf("The maximum element is: %d\n", max);
    printf("The minimum element is: %d\n", min);

    return 0;
}