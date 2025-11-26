#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count frequency of lowercase letters in first string
    for(int i = 0; str1[i] != '\0'; i++) {
        char ch = tolower(str1[i]);
        if(ch >= 'a' && ch <= 'z') {
            freq1[ch - 'a']++;
        }
    }

    // Count frequency of lowercase letters in second string
    for(int i = 0; str2[i] != '\0'; i++) {
        char ch = tolower(str2[i]);
        if(ch >= 'a' && ch <= 'z') {
            freq2[ch - 'a']++;
        }
    }

    // Compare frequency arrays
    int isAnagram = 1;
    for(int i = 0; i < 26; i++) {
        if(freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
    }

    if(isAnagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}