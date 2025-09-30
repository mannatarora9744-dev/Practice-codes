//  Write a program to print the following pattern:

//   *
//  ***
// *****
//*******
// *****
//  ***
//   *

#include <stdio.h>
void printPattern(int n) {
    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = 0; j < (n - i) / 2; j++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int rows = 7; 
    printPattern(rows);
    return 0;
}