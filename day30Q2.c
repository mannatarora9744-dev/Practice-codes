// Count positive, negative, and zero elements in an array.

#include <stdio.h>
void countPosNegZero(int arr[], int size, int *posCount, int *negCount, int *zeroCount) {
    *posCount = 0;
    *negCount = 0;
    *zeroCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            (*posCount)++;
        } else if (arr[i] < 0) {
            (*negCount)++;
        } else {
            (*zeroCount)++;
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

    int posCount, negCount, zeroCount;
    countPosNegZero(arr, size, &posCount, &negCount, &zeroCount);
    printf("The number of positive elements is: %d\n", posCount);
    printf("The number of negative elements is: %d\n", negCount);
    printf("The number of zero elements is: %d\n", zeroCount);

    return 0;
}