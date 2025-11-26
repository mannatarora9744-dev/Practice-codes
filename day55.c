#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Step 1: Find a candidate using Boyer-Moore Voting Algorithm
    int candidate = nums[0];
    int count = 1;

    for(int i = 1; i < n; i++) {
        if(nums[i] == candidate) {
            count++;
        } else {
            count--;
            if(count == 0) {
                candidate = nums[i];
                count = 1;
            }
        }
    }

    // Step 2: Verify if candidate is actually majority
    count = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] == candidate) {
            count++;
        }
    }

    if(count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}