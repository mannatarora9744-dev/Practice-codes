#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};  // Array to store frequency of each lowercase letter

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if(ch >= 'a' && ch <= 'z') {  // Consider only lowercase letters
            freq[ch - 'a']++;
            if(freq[ch - 'a'] == 2) {
                printf("The first repeating lowercase letter is '%c'\n", ch);
                return 0;
            }
        }
    }

    printf("No repeating lowercase letter found.\n");
    return 0;
}