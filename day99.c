#include <stdio.h>
#include <stdlib.h>

// Define structure
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Dynamically allocate memory for structure
    struct Person *p = (struct Person *)malloc(sizeof(struct Person));

    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input details
    printf("Enter name: ");
    scanf("%s", p->name);

    printf("Enter age: ");
    scanf("%d", &p->age);

    printf("Enter height (in cm): ");
    scanf("%f", &p->height);

    // Print details
    printf("\n--- Person Details ---\n");
    printf("Name   : %s\n", p->name);
    printf("Age    : %d\n", p->age);
    printf("Height : %.2f cm\n", p->height);

    // Free allocated memory
    free(p);

    return 0;
}