#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[100] = "";
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int i = 0, start = 0, length = 0;
    while (1) {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            length++;
        } else {
            if(length > maxLength) {
                maxLength = length;
                strncpy(longest, str + start, length);
                longest[length] = '\0';  // Null-terminate the longest word
            }
            length = 0;
            start = i + 1;
        }
        if(str[i] == '\0') break;
        i++;
    }

    printf("The longest word is: %s\n", longest);

    return 0;
}