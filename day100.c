#include <stdio.h>

// Define a structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    // Create a structure variable
    struct Student s;

    // Create a pointer to the structure
    struct Student *ptr = &s;

    // Modify structure members using -> operator
    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // Display structure data using -> operator
    printf("\n--- Student Details ---\n");
    printf("Name  : %s\n", ptr->name);
    printf("Roll  : %d\n", ptr->roll);
    printf("Marks : %.2f\n", ptr->marks);

    return 0;
}