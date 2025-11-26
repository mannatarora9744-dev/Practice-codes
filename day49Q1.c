#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    // Print the first character if it's a letter
    if(isalpha(name[0])) {
        printf("%c", toupper(name[0]));
    }

    // Loop through the string to find spaces and print the next letter
    for(int i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ' && isalpha(name[i+1])) {
            printf("%c", toupper(name[i+1]));
        }
    }

    printf("\n");

    return 0;
}