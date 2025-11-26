#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);

    printf("All substrings of the string are:\n");

    // Loop for starting index
    for (int start = 0; start < length; start++) {
        // Loop for ending index
        for (int end = start; end < length; end++) {
            // Print characters from start to end
            for (int k = start; k <= end; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}