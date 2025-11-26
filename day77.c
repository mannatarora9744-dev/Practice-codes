#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    if(input == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    FILE *output = fopen("output.txt", "w");
    if(output == NULL) {
        printf("Error: Could not create output.txt\n");
        fclose(input);
        return 1;
    }

    char ch;
    while((ch = fgetc(input)) != EOF) {
        fputc(toupper(ch), output);  // Convert lowercase to uppercase
    }

    fclose(input);
    fclose(output);

    printf("Text successfully converted to uppercase and saved in output.txt\n");

    return 0;
}