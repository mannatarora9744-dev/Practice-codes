#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    printf("Enter the first string: ");
    scanf("%s", s);
    printf("Enter the second string: ");
    scanf("%s", t);

    int len1 = strlen(s);
    int len2 = strlen(t);

    if(len1 != len2) {
        printf("Not Anagram\n");
        return 0;
    }

    int freq[26] = {0};  // For lowercase letters 'a' to 'z'

    // Count frequency of each character in s
    for(int i = 0; i < len1; i++) {
        freq[s[i] - 'a']++;
    }

    // Subtract frequency using t
    for(int i = 0; i < len2; i++) {
        freq[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}