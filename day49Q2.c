#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    name[strcspn(name, "\n")] = '\0';

    int length = strlen(name);
    int start = 0;

    printf("Output: ");

    for (int i = 0; i <= length; i++) {
        if (name[i] == ' ' || name[i] == '\0') {
            // If this is the last word (surname), print it in full
            if (name[i] == '\0') {
                for (int j = start; j < i; j++) {
                    printf("%c", name[j]);
                }
            } else {
                // Print initial of the current word
                if (isalpha(name[start])) {
                    printf("%c. ", toupper(name[start]));
                }
            }
            start = i + 1;  // Move to next word
        }
    }

    printf("\n");

    return 0;
}