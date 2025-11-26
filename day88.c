#include <stdio.h>

int main() {
    // Define enumeration for user roles
    enum UserRole {ADMIN, USER, GUEST};
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};
    const int numRoles = 3;

    printf("Enum names and their integer values:\n");
    for(int i = 0; i < numRoles; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}