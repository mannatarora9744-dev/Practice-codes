// Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*

#include <stdio.h>
void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*\n");
        }
        for (int k = i - 1; k >= 1; k--) {
            printf("*\n");
        }
    }
}
int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printPattern(rows);
    return 0;
}