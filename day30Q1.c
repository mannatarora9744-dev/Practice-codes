// Count even and odd numbers in an array.

#include <stdio.h>
void countEvenOdd(int arr[], int size, int *evenCount, int *oddCount) {
    *evenCount = 0;
    *oddCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            (*evenCount)++;
        } else {
            (*oddCount)++;
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

    int evenCount, oddCount;
    countEvenOdd(arr, size, &evenCount, &oddCount);
    printf("The number of even elements is: %d\n", evenCount);
    printf("The number of odd elements is: %d\n", oddCount);

    return 0;
}