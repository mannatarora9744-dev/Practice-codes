#include <stdio.h>

// Define enumeration for Gender
enum Gender {MALE, FEMALE, OTHER};

// Define a struct Person
struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    // Input person's details
    printf("Enter name: ");
    scanf(" %[^\n]s", p.name);  // Read string with spaces

    printf("Enter age: ");
    scanf("%d", &p.age);

    int genderInput;
    printf("Enter gender (0-MALE, 1-FEMALE, 2-OTHER): ");
    scanf("%d", &genderInput);

    p.gender = genderInput;

    // Array to map enum values to strings
    const char *genderNames[] = {"Male", "Female", "Other"};

    // Print person's details
    printf("\nPerson Details:\n");
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Gender: %s\n", genderNames[p.gender]);

    return 0;
}