#include <stdio.h>

int main() {
    char line[256];

    // Open the file in read mode
    FILE *file = fopen("info.txt", "r");
    if(file == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    printf("Contents of info.txt:\n");

    // Read each line until EOF
    while(fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);  // fgets includes the newline character
    }

    // Close the file
    fclose(file);

    return 0;
}