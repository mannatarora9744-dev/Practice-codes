#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    char text[1000];

    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in append mode
    FILE *file = fopen(filename, "a");
    if(file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Clear input buffer before taking the text input
    getchar();

    printf("Enter the text to append: ");
    fgets(text, sizeof(text), stdin);

    // Remove newline character from fgets if present
    text[strcspn(text, "\n")] = '\0';

    // Append text followed by a newline
    fprintf(file, "%s\n", text);

    fclose(file);

    printf("Text successfully appended to %s\n", filename);

    return 0;
}