// Read and print elements of a one-dimensional array.

#include <stdio.h>
void readAndPrintArray(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The elements in the array are:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    readAndPrintArray(arr, size);

    return 0;
}