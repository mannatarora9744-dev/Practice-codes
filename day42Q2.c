#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string including spaces

    for(int i = 0; str[i] != '\0'; i++) {
        // If character is lowercase, convert to uppercase
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // Shift ASCII value
        }
    }

    printf("Uppercase string: %s", str);

    return 0;
}