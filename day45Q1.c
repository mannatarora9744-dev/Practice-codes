#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string including spaces

    printf("Enter the character to count: ");
    scanf("%c", &ch);

    // Count occurrences of the character
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }

    printf("The character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}