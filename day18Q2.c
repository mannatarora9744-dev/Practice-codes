// write a program to find the HCF of two numbers.

#include <stdio.h>
int main() {
    int num1, num2, hcf;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }

    for (int i = 1; i <= (num1 < num2 ? num1 : num2); i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}