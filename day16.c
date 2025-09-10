// write a program to take a number as input print its equivalent in binary representation.

#include <stdio.h>
int main() {
    int num;
    int binary[32]; 
    int index = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    if (num == 0) {
        binary[index++] = 0; 
    } else {
        while (num > 0) {
            binary[index++] = num % 2;
            num /= 2;
        }
    }

    printf("Binary representation: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}