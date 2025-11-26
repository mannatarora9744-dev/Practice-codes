#include <stdio.h>

int main() {
    // Define enumeration with explicit and default values
    enum Status {SUCCESS = 10, FAILURE, TIMEOUT = 20, UNKNOWN};

    printf("Enum values:\n");
    printf("SUCCESS = %d\n", SUCCESS);   // 10
    printf("FAILURE = %d\n", FAILURE);   // 11 (auto-incremented)
    printf("TIMEOUT = %d\n", TIMEOUT);   // 20
    printf("UNKNOWN = %d\n", UNKNOWN);   // 21 (auto-incremented)

    return 0;
}