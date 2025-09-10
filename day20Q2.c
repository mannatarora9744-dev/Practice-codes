// write a program to find the 1's complement of a binary number and print it.

#include <stdio.h>
int main() {
    long long num, result = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%lld", &num);

    while (num > 0) {
        int digit = num % 10;    
        if (digit == 0)
            result += 1 * place;   
        else
            result += 0 * place;   

        num /= 10;   
        place *= 10; 
    }

    printf("1's Complement = %lld\n", result);

    return 0;
}