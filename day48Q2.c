#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int start = 0, end = 0, length = strlen(str);

    for(int i = 0; i <= length; i++) {
        // If space or end of string, reverse the current word
        if(str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            end = i - 1;
            // Reverse characters from start to end
            while(start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;  // Move start to the next word
        }
    }

    printf("Sentence with reversed words: %s", str);

    return 0;
}