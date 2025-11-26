#include <stdio.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string including spaces

    for(i = 0, j = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        // Check if character is NOT a vowel
        if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
           ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            str[j++] = ch;  // Keep the character
        }
    }
    str[j] = '\0';  // Null-terminate the string

    printf("String after removing vowels: %s", str);

    return 0;
}