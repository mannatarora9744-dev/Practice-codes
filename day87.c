#include <stdio.h>

int main() {
    // Define enumeration for user roles
    enum UserRole {ADMIN, USER, GUEST};

    int roleInput;
    printf("Select user role (0-ADMIN, 1-USER, 2-GUEST): ");
    scanf("%d", &roleInput);

    enum UserRole role = roleInput;

    // Display message based on role
    switch(role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest! You have minimal access.\n");
            break;
        default:
            printf("Invalid role selected!\n");
    }

    return 0;
}