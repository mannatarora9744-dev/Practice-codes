#include <stdio.h>

int main() {
    // Define enumeration with explicit values starting from 10
    enum Status {SUCCESS = 10, FAILURE, TIMEOUT};

    printf("Enum values:\n");
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}