#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read string including spaces

    // Replace spaces with hyphens
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            str[i] = '-';
        }
    }

    printf("Modified string: %s", str);

    return 0;
}