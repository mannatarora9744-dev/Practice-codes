#include <stdio.h>

// Define the Student structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

// Function to find and return the top student
struct Student topStudent(struct Student students[], int n) {
    int maxIndex = 0;
    for(int i = 1; i < n; i++) {
        if(students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }
    return students[maxIndex];  // Return the structure
}

int main() {
    int n = 5;
    struct Student students[n];

    // Input details for n students
    for(int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Get the top student
    struct Student top = topStudent(students, n);

    // Print top student's details
    printf("Top Student Details:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}