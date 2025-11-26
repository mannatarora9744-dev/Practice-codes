#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    printf("Enter the filename to read: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if(file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    int characters = 0, words = 0, lines = 0;
    char ch;
    int inWord = 0;

    while((ch = fgetc(file)) != EOF) {
        characters++;  // Count every character

        if(ch == '\n') {
            lines++;  // Count lines
        }

        // Check for word boundaries
        if(isspace(ch)) {
            inWord = 0;
        } else if(inWord == 0) {
            words++;
            inWord = 1;
        }
    }

    fclose(file);

    printf("Total characters: %d\n", characters);
    printf("Total words: %d\n", words);
    printf("Total lines: %d\n", lines);

    return 0;
}