#include <stdio.h>

int main() {
    char sourceFile[100], destFile[100];
    
    printf("Enter the source filename: ");
    scanf("%s", sourceFile);
    
    printf("Enter the destination filename: ");
    scanf("%s", destFile);
    
    FILE *source = fopen(sourceFile, "r");
    if(source == NULL) {
        printf("Error: Could not open source file %s\n", sourceFile);
        return 1;
    }
    
    FILE *dest = fopen(destFile, "w");
    if(dest == NULL) {
        printf("Error: Could not create destination file %s\n", destFile);
        fclose(source);
        return 1;
    }
    
    char ch;
    while((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }
    
    fclose(source);
    fclose(dest);
    
    printf("File copied successfully from %s to %s\n", sourceFile, destFile);
    
    return 0;
}