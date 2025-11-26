#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Remove newline character if present
    s[strcspn(s, "\n")] = '\0';

    int n = strlen(s);
    int lastIndex[256];  // Stores last index of characters
    for(int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    int maxLength = 0;
    int start = 0;  // Start of current substring

    for(int i = 0; i < n; i++) {
        if(lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }

        lastIndex[(unsigned char)s[i]] = i;

        int currentLength = i - start + 1;
        if(currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    printf("Length of the longest substring without repeating characters: %d\n", maxLength);

    return 0;
}