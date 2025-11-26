#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);  // Read string without spaces

    // Loop through each character until null terminator
    for(int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}