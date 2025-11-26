#include <stdio.h>

int main() {
    char filename[100];
    char line[256];

    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try opening the file in read mode
    FILE *file = fopen(filename, "r");
    if(file == NULL) {
        printf("Error: File '%s' does not exist or cannot be opened.\n", filename);
        return 1;
    }

    printf("Contents of '%s':\n", filename);

    // Read and print each line
    while(fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}