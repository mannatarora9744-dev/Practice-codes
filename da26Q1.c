// Write a program to print the following pattern:
//    5
//   45
//  345
// 2345
//12345

#include <stdio.h>
void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = n - i + 1; k <= n; k++) {
            printf("%d", k);
        }
        printf("\n");
    }
}
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printPattern(rows);
    return 0;
}