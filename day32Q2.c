#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};   // to store frequency of digits 0-9
    int digit, maxDigit = 0, maxFreq = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0) num = -num;  // make positive if negative

    // Count digit frequencies
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring the most times: %d (appears %d times)\n", maxDigit, maxFreq);

    return 0;
}