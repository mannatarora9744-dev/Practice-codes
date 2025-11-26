#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Step 1: Calculate prefix products
    int prefix[n];
    prefix[0] = 1;  // No elements to the left of first element
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    // Step 2: Calculate suffix products on the fly and final answer
    int suffix = 1;  // No elements to the right of last element
    for(int i = n - 1; i >= 0; i--) {
        answer[i] = prefix[i] * suffix;
        suffix *= nums[i];
    }

    // Print the answer array
    printf("Answer array: ");
    for(int i = 0; i < n; i++) {
        if(i != n - 1)
            printf("%d, ", answer[i]);
        else
            printf("%d\n", answer[i]);
    }

    return 0;
}