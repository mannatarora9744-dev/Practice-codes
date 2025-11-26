#include <stdio.h>

int main() {
    // Define enumeration for status codes
    enum Status {SUCCESS, FAILURE, TIMEOUT};

    // Example usage: user selects a status code
    int code;
    printf("Enter status code (0-SUCCESS, 1-FAILURE, 2-TIMEOUT): ");
    scanf("%d", &code);

    enum Status status = code;

    // Print message based on status
    switch(status) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Invalid status code!\n");
    }

    return 0;
}