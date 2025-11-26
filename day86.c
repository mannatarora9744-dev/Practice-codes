#include <stdio.h>

int main() {
    // Define enumeration for menu choices
    enum Menu {ADD = 1, SUBTRACT, MULTIPLY};

    int choice;
    int num1, num2;

    printf("Menu:\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    enum Menu operation = choice;

    switch(operation) {
        case ADD:
            printf("Result: %d\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("Result: %d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("Result: %d\n", num1 * num2);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}