#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    int n = strlen(str);

    for(int i = 0; i < n; i++) {
        if(i == 0 && isalpha(str[i])) {
            str[i] = toupper(str[i]); // Capitalize first letter
        } else {
            str[i] = tolower(str[i]); // Convert the rest to lowercase
        }
    }

    printf("Sentence case: %s\n", str);

    return 0;
}