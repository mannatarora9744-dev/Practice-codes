// Write a program to print the following pattern:****
//*****
//***** 
//*****

#include <stdio.h>
void printPattern(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int rows = 4, cols = 5;
    printPattern(rows, cols);
    return 0;
}
