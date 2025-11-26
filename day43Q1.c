#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string including spaces

    // Calculate length manually (excluding newline)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Reverse the string
    for(int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';  // Null-terminate the reversed string

    printf("Reversed string: %s\n", reversed);

    return 0;
}